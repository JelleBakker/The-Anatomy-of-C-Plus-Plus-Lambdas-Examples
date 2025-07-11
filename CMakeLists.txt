cmake_minimum_required(VERSION 3.31)
project(The-Anatomy-of-C-Plus-Plus-Lambdas-Examples)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE CPP_FILES "chapter*/*.cpp")
foreach (CPP_FILE IN LISTS CPP_FILES)
    get_filename_component(FILENAME ${CPP_FILE} NAME_WE)
    add_executable(${FILENAME} ${CPP_FILE})
endforeach ()
