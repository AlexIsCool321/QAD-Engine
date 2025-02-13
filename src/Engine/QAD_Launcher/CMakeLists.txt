cmake_minimum_required(VERSION 3.10)
project(QAD_Launcher)

set(SOURCES
	"Sources/QAD_Launcher.cpp"
	"Headers/QAD_Launcher.h"
)

add_executable(${PROJECT_NAME} ${SOURCES})

add_dependencies(${PROJECT_NAME} QAD_Render)

link_directories(${PROJECT_NAME} "${CMAKE_SOURCE_DIR}/../build/shared")

target_link_libraries(${PROJECT_NAME} QAD_Render)

set_target_properties(${PROJECT_NAME} PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_SOURCE_DIR}/../game"
	RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/../game"
)