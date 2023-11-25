file(GLOB_RECURSE ALL_TESTS *.cpp)

add_executable(test_all ${ALL_TESTS})

target_link_libraries(test_all static gtest)
