cmake_minimum_required(VERSION 3.30)
project(ParsingLib_C C)

set(CMAKE_C_STANDARD 11)

add_library(ParsingLib_C STATIC
        main.c
        numparse.c
        numparse.h)
