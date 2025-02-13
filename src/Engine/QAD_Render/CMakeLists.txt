cmake_minimum_required(VERSION 3.10)
project(QAD_Render)

set(SOURCES
	"Sources/QAD_Render.cpp"
	"Headers/QAD_Render.h"

	"Sources/QAD_Window.cpp"
	
	"Sources/QAD_Shader.cpp"
	"Sources/QAD_Material.cpp"
	
	"Sources/QAD_Mesh.cpp"
	
	"Sources/QAD_Camera.cpp"
)

add_library(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE "Glad")
target_link_libraries(${PROJECT_NAME} PRIVATE "GLFW/glfw3")

set_target_properties(${PROJECT_NAME} PROPERTIES
	ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_SOURCE_DIR}/../build/shared"
	ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/../build/shared"
)