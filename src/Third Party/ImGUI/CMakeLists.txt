cmake_minimum_required(VERSION 3.10)
project(ImGUI)

include_directories(${PROJECT_NAME} PUBLIC "Third Party/ImGUI/Headers/imgui")

set(SOURCES
	"Sources/imgui.cpp"
	"Sources/imgui_draw.cpp"
	"Sources/imgui_tables.cpp"
	"Sources/imgui_widgets.cpp"
	
	"Sources/imgui.cpp"
)

add_library(${PROJECT_NAME} ${SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
	FOLDER "Third Party"

	ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_SOURCE_DIR}/../build/shared"
	ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/../build/shared"
)