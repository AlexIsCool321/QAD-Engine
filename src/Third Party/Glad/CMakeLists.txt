cmake_minimum_required(VERSION 3.10)
project(Glad)

set(SOURCES
	"Sources/glad.c"

	"Headers/glad/glad.h"
	"Headers/KHR/khrplatform.h"
)

add_library(Glad ${SOURCES})

set_target_properties(Glad PROPERTIES
	ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_SOURCE_DIR}/../build/shared"
	ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/../build/shared"
	FOLDER "Third Party"
)