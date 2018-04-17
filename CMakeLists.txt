cmake_minimum_required(VERSION 3.0)
project(glBasic)	# rename this

option(GLFW_BUILD_DOCS OFF)
option(GLFW_BUILD_EXAMPLES OFF)
option(GLFW_BUILD_TESTS OFF)
add_subdirectory(glfw)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -std=c++11")
    if(NOT WIN32)
        set(GLAD_LIBRARIES dl)
    endif()
endif()

include_directories(
	glad/include/
	glfw/include/
	glm/
	stb/
)

file(GLOB TemplateFiles template/*)
file(COPY ${TemplateFiles} DESTINATION ${CMAKE_BINARY_DIR})

file(GLOB GLAD_SOURCE glad/src/glad.c)
source_group("GladSource" FILES ${GLAD_SOURCE})

add_definitions(-DGLFW_INCLUDE_NONE -DPROJECT_SOURCE_DIR=\"${PROJECT_SOURCE_DIR}\")
add_executable(${PROJECT_NAME} ${CMAKE_BINARY_DIR}/main.cpp ${GLAD_SOURCE})
target_link_libraries(${PROJECT_NAME} glfw ${GLFW_LIBRARIES} ${GLAD_LIBRARIES})

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME})