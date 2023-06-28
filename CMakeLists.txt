cmake_minimum_required(VERSION 3.0)

enable_language(CXX C ASM)

# Project name
project(dsa-solutions)

add_subdirectory(leetcode)
add_subdirectory(unittest-dsa)

add_dependencies(unittest-dsa leetcode)

