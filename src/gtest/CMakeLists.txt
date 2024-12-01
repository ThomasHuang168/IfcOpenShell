################################################################################
#                                                                              #
# This file is part of IfcOpenShell.                                           #
#                                                                              #
# IfcOpenShell is free software: you can redistribute it and/or modify         #
# it under the terms of the Lesser GNU General Public License as published by  #
# the Free Software Foundation, either version 3.0 of the License, or          #
# (at your option) any later version.                                          #
#                                                                              #
# IfcOpenShell is distributed in the hope that it will be useful,              #
# but WITHOUT ANY WARRANTY; without even the implied warranty of               #
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                 #
# Lesser GNU General Public License for more details.                          #
#                                                                              #
# You should have received a copy of the Lesser GNU General Public License     #
# along with this program. If not, see <http://www.gnu.org/licenses/>.         #
#                                                                              #
################################################################################

if (WITH_OPENCASCADE)
    file(GLOB test_filenames ./*.cpp)
    foreach(filename ${test_filenames})
        get_filename_component(test_name ${filename} NAME_WE)
        add_executable("${test_name}" ${filename})
        target_link_libraries("${test_name}" gtest_main ${IFCOPENSHELL_LIBRARIES} ${OPENCASCADE_LIBRARIES})
        set_target_properties(test_ifcclash PROPERTIES FOLDER gtest)
        add_test(NAME "${test_name}" COMMAND "${test_name}")
    endforeach()
endif()
