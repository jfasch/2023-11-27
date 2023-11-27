CMAKE_MINIMUM_REQUIRED(VERSION 3.16)
PROJECT(2023-11-27)

# compiler options. (we only check for gcc)
if (${CMAKE_COMPILER_IS_GNUCC})
   set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0 -g3 -Wall -Werror")
   set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O0 -g3 -Wall -Werror")
endif()

LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/CMake)

ADD_SUBDIRECTORY(googletest)
