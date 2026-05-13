cmake_minimum_required(VERSION 3.30)

project(hello_world
  LANGUAGES C)

set(CMAKE_C_STANDARD 11)

add_executable(hello src/hello_world.c)

enable_testing()

add_test(
  NAME hello_test
  COMMAND hello
  )
