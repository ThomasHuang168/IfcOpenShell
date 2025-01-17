# IfcOpenShell - IFC toolkit and geometry engine
# Copyright (C) 2022 Dion Moult <dion@thinkmoult.com>
#
# This file is part of IfcOpenShell.
#
# IfcOpenShell is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# IfcOpenShell is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with IfcOpenShell.  If not, see <http://www.gnu.org/licenses/>.

import test.bootstrap
import ifcopenshell.api


class TestAddMaterialSetIFC2X3(test.bootstrap.IFC2X3):
    def test_add_layer_set(self):
        material = ifcopenshell.api.run("material.add_material_set", self.file, set_type="IfcMaterialLayerSet")
        assert material.LayerSetName == "Unnamed"
        assert material.is_a("IfcMaterialLayerSet")

    def test_add_list(self):
        material = ifcopenshell.api.run("material.add_material_set", self.file, set_type="IfcMaterialList")
        assert material.is_a("IfcMaterialList")


class TestAddMaterialSetIFC4(test.bootstrap.IFC4, TestAddMaterialSetIFC2X3):
    # entities added in IFC4
    def test_add_profile_set(self):
        material = ifcopenshell.api.run("material.add_material_set", self.file, set_type="IfcMaterialProfileSet")
        assert material.Name == "Unnamed"
        assert material.is_a("IfcMaterialProfileSet")

    def test_add_constituent_set(self):
        material = ifcopenshell.api.run("material.add_material_set", self.file, set_type="IfcMaterialConstituentSet")
        assert material.Name == "Unnamed"
        assert material.is_a("IfcMaterialConstituentSet")
