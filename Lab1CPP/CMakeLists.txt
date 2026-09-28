cmake_minimum_required(VERSION 3.10)

project(Lab1CPP)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(task1 task1.cpp)

target_include_directories(task1 PRIVATE ../LibraryCPP)
target_link_libraries(task1 LibraryCPP)

add_executable(task2 task2.cpp)

target_include_directories(task2 PRIVATE ../LibraryCPP)
target_link_libraries(task2 LibraryCPP)

enable_testing()

add_test(
    NAME task1_test1
    COMMAND task1 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task1_test1.txt
)
set_property(TEST task1_test1 PROPERTY PASS_REGULAR_EXPRESSION "1 4")

add_test(
    NAME task1_test2
    COMMAND task1 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task1_test2.txt
)
set_property(TEST task1_test2 PROPERTY PASS_REGULAR_EXPRESSION "0")

add_test(
    NAME task1_test3
    COMMAND task1 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task1_test3.txt
)
set_property(TEST task1_test3 PROPERTY PASS_REGULAR_EXPRESSION "0")

add_test(
    NAME task1_test4
    COMMAND task1 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task1_test4.txt
)
set_property(TEST task1_test4 PROPERTY PASS_REGULAR_EXPRESSION "3 1 2 4")

add_test(
    NAME task1_test5
    COMMAND task1 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task1_test5.txt
)
set_property(TEST task1_test5 PROPERTY PASS_REGULAR_EXPRESSION "4 0 1 2 3")

add_test(
    NAME task1_test6
    COMMAND task1 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task1_test6.txt
)
set_property(TEST task1_test6 PROPERTY PASS_REGULAR_EXPRESSION "0")

add_test(
    NAME task1_test7
    COMMAND task1 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task1_test7.txt
)
set_property(TEST task1_test7 PROPERTY PASS_REGULAR_EXPRESSION "2 2 5")

add_test(
    NAME task1_test8
    COMMAND task1 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task1_test8.txt
)
set_property(TEST task1_test8 PROPERTY PASS_REGULAR_EXPRESSION "0")

add_test(
    NAME task1_test9
    COMMAND task1 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task1_test9.txt
)
set_property(TEST task1_test9 PROPERTY PASS_REGULAR_EXPRESSION "0")

add_test(
    NAME task1_test10
    COMMAND task1 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task1_test10.txt
)
set_property(TEST task1_test10 PROPERTY PASS_REGULAR_EXPRESSION "1 4")


add_test(
    NAME task2_test1
    COMMAND task2 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task2_test1.txt
)
set_property(TEST task2_test1 PROPERTY PASS_REGULAR_EXPRESSION "2")

add_test(
    NAME task2_test2
    COMMAND task2 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task2_test2.txt
)
set_property(TEST task2_test2 PROPERTY PASS_REGULAR_EXPRESSION "-1")

add_test(
    NAME task2_test3
    COMMAND task2 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task2_test3.txt
)
set_property(TEST task2_test3 PROPERTY PASS_REGULAR_EXPRESSION "2")

add_test(
    NAME task2_test4
    COMMAND task2 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task2_test4.txt
)
set_property(TEST task2_test4 PROPERTY PASS_REGULAR_EXPRESSION "2")

add_test(
    NAME task2_test5
    COMMAND task2 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task2_test5.txt
)
set_property(TEST task2_test5 PROPERTY PASS_REGULAR_EXPRESSION "0")

add_test(
    NAME task2_test6
    COMMAND task2 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task2_test6.txt
)
set_property(TEST task2_test6 PROPERTY PASS_REGULAR_EXPRESSION "2")

add_test(
    NAME task2_test7
    COMMAND task2 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task2_test7.txt
)
set_property(TEST task2_test7 PROPERTY PASS_REGULAR_EXPRESSION "-1")

add_test(
    NAME task2_test8
    COMMAND task2 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task2_test8.txt
)
set_property(TEST task2_test8 PROPERTY PASS_REGULAR_EXPRESSION "4")

add_test(
    NAME task2_test9
    COMMAND task2 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task2_test9.txt
)
set_property(TEST task2_test9 PROPERTY PASS_REGULAR_EXPRESSION "58")

add_test(
    NAME task2_test10
    COMMAND task2 ${CMAKE_CURRENT_SOURCE_DIR}/Tests/task2_test10.txt
)
set_property(TEST task2_test10 PROPERTY PASS_REGULAR_EXPRESSION "0")