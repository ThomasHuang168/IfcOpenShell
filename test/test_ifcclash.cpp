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

#ifdef IFOPSH_WITH_OPENCASCADE
#include "../src/ifcgeom/kernels/opencascade/IfcGeomTree.h"

#include <gtest/gtest.h>

TEST(Boolean, readIfcGeom) {
    bool check_all = true;
    double tolerance = 0.000001;

    IfcGeom::tree tree;
    auto add_file = [&tree](IfcParse::IfcFile& f) {
        IfcGeom::Iterator it("opencascade", ifcopenshell::geometry::Settings{}, &f, {}, 1);
        if (it.initialize()) {
            do {
                tree.add_element(dynamic_cast<IfcGeom::TriangulationElement*>(it.get()));
            } while (it.next());
        }
    };

    IfcParse::IfcFile file_a("C:\\Users\\HI.HUANG\\Downloads\\A.ifc");
    add_file(file_a);

    IfcParse::IfcFile file_b("C:\\Users\\HI.HUANG\\Downloads\\B.ifc");
    add_file(file_b);

    std::vector<const IfcUtil::IfcBaseEntity*> set_a_entities;
    std::vector<const IfcUtil::IfcBaseEntity*> set_b_entities;

    //auto walls = file_a.instances_by_type("IfcReinforcingbar");
    //auto slabs = file_b.instances_by_type("IfcBuildingElementProxy");
    auto walls = file_a.instances_by_type("IfcProduct");
    auto slabs = file_b.instances_by_type("IfcProduct");
    std::transform(walls->begin(), walls->end(), std::back_inserter(set_a_entities), [](auto* x) { return x->as<IfcUtil::IfcBaseEntity>(); });
    std::transform(slabs->begin(), slabs->end(), std::back_inserter(set_b_entities), [](auto* x) { return x->as<IfcUtil::IfcBaseEntity>(); });

    std::vector<IfcGeom::clash> clash_result = tree.clash_intersection_many(set_a_entities, set_b_entities, tolerance, check_all);

    std::cout << "n clashes " << clash_result.size() << std::endl;

    ASSERT_TRUE(1);
}

#endif