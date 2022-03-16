cmake_minimum_required (VERSION 2.8)
project (PierwszyProgram)
add_executable(Laborka main.cpp)
if (USE_TRIGONOMETRY_DEGREE)
include_directories ("${student/LabCmake/src}/Trygonometria")
add_subdirectory (Trygonometria)
target_link_libraries (Laborka Trygonometria)  
option (USE_TRIGONOMETRY_DEGREE
        "Czy argumentami funkcji trygonometrycznych maja byc stopnie" ON)
endif (USE_TRIGONOMETRY_DEGREE)
configure_file (
  "${PROJECT_SOURSE_DIR}/LaborkaConfig.h.in"
  "${PROJECT_BINARY_BUILD}/LaborkaConfig.h"
  )
include_directories("${student/LabCmake/src}")


