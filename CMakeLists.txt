cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(ImageEnhancer)

# Find OpenCV package
find_package(OpenCV REQUIRED)

# Add your source file(s)
add_executable(out src/main.cpp)

# Link your executable with OpenCV
target_link_libraries(out PRIVATE ${OpenCV_LIBS})

# Set the output directory to the main directory
set_target_properties(out PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}
)
