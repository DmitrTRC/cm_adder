enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${cm_adder_SOURCE_DIR}/src)
message(STATUS "cm_adder Source DIR : ${cm_adder_SOURCE_DIR}")


add_executable(cm_adder_Tests_run
        test_folder.cpp
        )

target_link_libraries(cm_adder_Tests_run
        gtest
        gtest_main
        cm_adder_lib
        )

include(GoogleTest)
gtest_discover_tests(cm_adder_Tests_run)