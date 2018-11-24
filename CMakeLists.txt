cmake_minimum_required (VERSION 2.6)
if(POLICY CMP0048)
	cmake_policy(SET CMP0048 NEW)
	project (SLAM VERSION 1.0)
else()
	project (SLAM)
	set(SLAM_VERSION_MAJOR 1)
	set(SLAM_VERSION_MINOR 0)
endif()

configure_file(
	"${PROJECT_SOURCE_DIR}/main.hpp.in"
	"${PROJECT_BINARY_DIR}/main.h"
)

include_directories(
	"${PROJECT_BINARY_DIR}"
)

add_executable(main.app main.cpp)
