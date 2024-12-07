/********************************************************************************
 *                                                                              *
 * This file is part of IfcOpenShell.                                           *
 *                                                                              *
 * IfcOpenShell is free software: you can redistribute it and/or modify         *
 * it under the terms of the Lesser GNU General Public License as published by  *
 * the Free Software Foundation, either version 3.0 of the License, or          *
 * (at your option) any later version.                                          *
 *                                                                              *
 * IfcOpenShell is distributed in the hope that it will be useful,              *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of               *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                 *
 * Lesser GNU General Public License for more details.                          *
 *                                                                              *
 * You should have received a copy of the Lesser GNU General Public License     *
 * along with this program. If not, see <http://www.gnu.org/licenses/>.         *
 *                                                                              *
 ********************************************************************************/

/********************************************************************************
 *                                                                              *
 * This started as a brief example of how IfcOpenShell can be interfaced from   *
 * within a C++ context, it has since then evolved into a fullfledged command   *
 * line application that is able to convert geometry in an IFC files into       *
 * several tessellated and topological output formats.                          *
 *                                                                              *
 ********************************************************************************/

// windows stuff: defines max as a macro when including windows.h
// error C2589: '(': illegal token on right side of '::'
#define NOMINMAX

// TODO: Multiple schemas
#define IfcSchema Ifc2x3

#include "../src/ifcparse/IfcFile.h"
#include "../src/ifcparse/IfcLogger.h"
#include "../src/ifcparse/Ifc2x3.h"

#include <boost/preprocessor/stringize.hpp>
#include <boost/preprocessor/seq/for_each.hpp>
#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/seq/pop_back.hpp>
#include <boost/preprocessor/comparison/greater.hpp> 
#include <boost/preprocessor/selection/min.hpp>

#include "../src/serializers/ColladaSerializer.h"
#include "../src/serializers/GltfSerializer.h"
#include "../src/serializers/HdfSerializer.h"
#include "../src/serializers/IgesSerializer.h"
#include "../src/serializers/StepSerializer.h"
#include "../src/serializers/WavefrontObjSerializer.h"
#include "../src/serializers/XmlSerializer.h"
#include "../src/serializers/SvgSerializer.h"
#include "../src/serializers/USDSerializer.h"
#include "../src/serializers/TtlWktSerializer.h"
            
#include "../src/ifcgeom/IfcGeomFilter.h"
#include "../src/ifcgeom/Iterator.h"
#include "../src/ifcgeom/IfcGeomRenderStyles.h"

#include "../src/ifcgeom/taxonomy.h"
#include "../src/ifcgeom/piecewise_function_evaluator.h"
#ifdef IFOPSH_WITH_OPENCASCADE
    #include "../src/ifcgeom/Serialization/Serialization.h"
    #include "../src/ifcgeom/kernels/opencascade/IfcGeomTree.h"

    #include <BRepTools_ShapeSet.hxx>
#endif

#include "../src/ifcparse/utils.h"

#ifdef IFOPSH_WITH_OPENCASCADE

#include <Standard_Version.hxx>

#if OCC_VERSION_HEX < 0x60900
#include <IGESControl_Controller.hxx>
#endif

#endif

#include <boost/program_options.hpp>
#include <boost/make_shared.hpp>

#include <fstream>
#include <sstream>
#include <set>
#include <time.h>
#include <iomanip>

#if USE_VLD
#include <vld.h>
#endif

#ifdef _MSC_VER
#include <io.h>
#include <fcntl.h>
#endif

#include <random>
#include <thread>

#if defined(_MSC_VER) && defined(_UNICODE)
typedef std::wstring path_t;
typedef std::wofstream ofstream_t;
static std::wostream& cout_ = std::wcout;
static std::wostream& cerr_ = std::wcerr;
#else
typedef std::string path_t;
typedef std::ofstream ofstream_t;
static std::ostream& cout_ = std::cout;
static std::ostream& cerr_ = std::cerr;
#endif

#include "../src/ifcgeom/IfcGeomFilter.h"
#include "../src/ifcgeom/IfcGeomRenderStyles.h"
#include "../src/ifcgeom/Iterator.h"
#include "../src/ifcparse/utils.h"

#include <gtest/gtest.h>

TEST(Boolean, readIfcGeom) {
    bool check_all = true;
    double tolerance = 0.000001;


    IfcGeom::tree* _tree;
    std::vector<const IfcUtil::IfcBaseEntity*> set_a_entities;
    std::vector<const IfcUtil::IfcBaseEntity*> set_b_entities;
    IfcParse::IfcFile* file_a = new IfcParse::IfcFile("C:/Users/HI.HUANG/Downloads/A.ifc");
    _tree = new IfcGeom::tree(*file_a);
    //_tree = new IfcGeom::tree();
    //
    //ifcopenshell::geometry::Settings settings_ = ifcopenshell::geometry::Settings{};
    //settings_.get<ifcopenshell::geometry::settings::IteratorOutput>().value = //ifcopenshell::geometry::settings::NATIVE;
    //settings_.get<ifcopenshell::geometry::settings::UseWorldCoords>().value = true;
    //settings_.get<ifcopenshell::geometry::settings::ReorientShells>().value = true;
    //
    //IfcGeom::Iterator it(settings_, file_a, {}, 1);
    //if (it.initialize()) {
    //    do {
    //        auto* elem = it.get();
    //        if (elem == NULL) {
    //            continue;
    //        }
    //        _tree->add_element(dynamic_cast<IfcGeom::TriangulationElement*>(elem));
    //    } while (it.next());
    //}


    IfcSchema::IfcProduct::list::ptr elements = (*file_a).instances_by_type<IfcSchema::IfcProduct>();

    std::cout << "Found " << elements->size() << " elements" << std::endl;

    for (auto it_a = elements->begin(); it_a != elements->end(); ++it_a) {
        auto* element = *it_a;
        element->toString(std::cout);
        std::cout << std::endl;
        if (!element->declaration().is("IfcProduct")) {
            throw IfcParse::IfcException("All instances should be of type IfcProduct");
        }
        set_a_entities.push_back(static_cast<IfcUtil::IfcBaseEntity*>(element));
    }
    IfcParse::IfcFile* file_b = new IfcParse::IfcFile("C:/Users/HI.HUANG/Downloads/B.ifc");
    _tree->add_file(*file_b, ifcopenshell::geometry::Settings{});
    //IfcGeom::Iterator it_b(settings_, file_b, {}, 1);
    //if (it_b.initialize()) {
    //    do {
    //        auto* elem = it_b.get();
    //        if (elem == NULL) {
    //            continue;
    //        }
    //        _tree->add_element(dynamic_cast<IfcGeom::TriangulationElement*>(elem));
    //    } while (it_b.next());
    //}

    elements = (*file_b).instances_by_type<IfcSchema::IfcProduct>();

    std::cout << "Found " << elements->size() << " elements" << std::endl;

    for (auto it_b_b = elements->begin(); it_b_b != elements->end(); ++it_b_b) {
        auto* element = *it_b_b;
        element->toString(std::cout);
        std::cout << std::endl;
        if (!element->declaration().is("IfcProduct")) {
            throw IfcParse::IfcException("All instances should be of type IfcProduct");
        }
        set_b_entities.push_back(static_cast<IfcUtil::IfcBaseEntity*>(element));
    }
    std::vector<IfcGeom::clash> clash_result = _tree->clash_intersection_many(set_a_entities, set_b_entities, tolerance, check_all);

    ASSERT_TRUE(1);
}
