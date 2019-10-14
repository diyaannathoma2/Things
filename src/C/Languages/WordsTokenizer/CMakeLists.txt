cmake_minimum_required(VERSION 3.15)
project(WordsTokenizer C)

set(CMAKE_C_STANDARD 11)

include_directories(common)

add_executable(WordsTokenizer
        common/cursor.c
        common/cursor.h
        main.c)

include_directories(tests)

add_executable(WordsTokenizerTests
        common/cursor.c
        common/cursor.h
        tests/cursor_tests.c
        tests/cursor_tests.h
        tests.c)
