cmake_minimum_required(VERSION 3.14)
project(CTestingApplication C)

set(CMAKE_C_STANDARD 99)

add_executable(CTestingApplication main.c fileWithStructs.h somethingRandom.h somethingRandom.c)