cmake_minimum_required(VERSION 4.0)
project(exercise6 C)

set(CMAKE_C_STANDARD 17)

add_executable(exercise6 task2.c
        fuzz_task2.c
        task2.h
        task2_vuln.h
        task2_vuln.c
        fuzz_task2_vuln.c)
