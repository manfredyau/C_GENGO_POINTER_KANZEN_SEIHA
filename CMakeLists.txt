cmake_minimum_required(VERSION 3.14)
project(C_GENGO_POINTER_KANZEN_SEIHA C)

set(CMAKE_C_STANDARD 11)

add_executable(C_GENGO_POINTER_KANZEN_SEIHA main.c)
add_executable(pointer Chapter1/pointer.c)
add_executable(try1 Chapter1/try1.c)
add_executable(try2 Chapter1/try2.c)