cmake_minimum_required(VERSION 3.10)
project(QAD_Engine)

#THIRD PARTY
link_directories("${CMAKE_SOURCE_DIR}/Third Party")

include_directories(${PROJECT_NAME} PUBLIC "Third Party/Glad/Headers")
include_directories(${PROJECT_NAME} PUBLIC "Third Party/GLM/Headers")
include_directories(${PROJECT_NAME} PUBLIC "Third Party/ImGUI/Headers")
include_directories(${PROJECT_NAME} PUBLIC "Third Party/GLFW/Headers")

project(Glad)
add_subdirectory("Third Party/Glad")

project(ImGUI)
#add_subdirectory("Third Party/ImGUI")

# ENGINE
link_directories("${CMAKE_SOURCE_DIR}/../build/shared")

include_directories(${PROJECT_NAME} PUBLIC "Engine/QAD_Render/Headers")
include_directories(${PROJECT_NAME} PUBLIC "Engine/QAD_Launcher/Headers")

project(QAD_Render)
add_subdirectory("Engine/QAD_Render")

project(QAD_Launcher)
add_subdirectory("Engine/QAD_Launcher")