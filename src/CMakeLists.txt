

project(cm_adder_run)

set(CMAKE_CXX_STANDARD 20)

#Build library

set(HEADER_FILES
        Dir_Builder.hpp

        )

set(SOURCE_FILES
        Dir_Builder.cpp

        )

add_library(cm_adder_lib ${SOURCE_FILES} ${HEADER_FILES})

add_executable(cm_adder_run main.cpp)

target_link_libraries(cm_adder_run cm_adder_lib)