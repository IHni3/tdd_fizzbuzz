cmake_minimum_required(VERSION 3.16)
project(tdd_fizzbuzz)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


enable_testing()
include(GoogleTest)

mark_as_advanced(
        BUILD_GMOCK BUILD_GTEST BUILD_SHARED_LIBS
        gmock_build_tests gtest_build_samples gtest_build_tests
        gtest_disable_pthreads gtest_force_shared_crt gtest_hide_internal_symbols
)

add_executable(
        ${PROJECT_NAME}
        testing/FizzBuzzTest.cc source/FizzBuzz.cpp source/FizzBuzz.h)

target_link_libraries(
        ${PROJECT_NAME}
        gtest_main
        gmock_main
)


gtest_discover_tests(${PROJECT_NAME})
