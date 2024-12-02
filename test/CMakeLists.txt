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

    # Download and unpack googletest at configure time
    message(STATUS "${CMAKE_CURRENT_SOURCE_DIR} -> ${CMAKE_CURRENT_BINARY_DIR}")
    message(STATUS "Running ${CMAKE_COMMAND} ${CMAKE_GENERATOR} in ${CMAKE_CURRENT_BINARY_DIR}/googletest-download")
    configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
    execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
                    RESULT_VARIABLE result
                    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
    if(result)
        message(FATAL_ERROR "CMake step for googletest failed: ${result}")
    endif()
    execute_process(COMMAND ${CMAKE_COMMAND} --build .
                    RESULT_VARIABLE result
                    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
    if(result)
        message(FATAL_ERROR "Build step for googletest failed: ${result}")
    endif()

    if(NOT USE_STATIC_MSVC_RUNTIME)
        # Prevent overriding the parent project's compiler/linker
        # settings on Windows
        set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    endif()

    # Add googletest directly to our build. This defines
    # the gtest and gtest_main targets.
    add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
                    ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
                    )

    file(GLOB test_filenames ./*.cpp)
    foreach(filename ${test_filenames})
        get_filename_component(test_name ${filename} NAME_WE)
        add_executable("${test_name}" ${filename})
        target_link_libraries("${test_name}" gtest_main ${IFCOPENSHELL_LIBRARIES} ${OPENCASCADE_LIBRARIES})
        set_target_properties(test_ifcclash PROPERTIES FOLDER test)
        add_test(NAME "${test_name}" COMMAND "${test_name}")
    endforeach()
endif()
