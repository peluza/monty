cmake_minimum_required(VERSION 3.16)
project(monty)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(bytecodes)

add_executable(monty
        bytecodes/00.m
        check_command
        check_fun.c
        free_stack_t.c
        holberton.h
        main.c
        monty
        pall.c
        push.c
        README.md)
