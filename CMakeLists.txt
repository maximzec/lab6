cmake_minimum_required(VERSION 3.13)
project(lab6)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab6 main.cpp University/student.cpp University/student.h University/headman.cpp University/headman.h Alive/Alive.cpp Alive/Alive.h Alive/Bird.cpp Alive/Bird.h Alive/Fish.cpp Alive/Fish.h Alive/Animal.cpp Alive/Animal.h Animal/Animal_t.cpp Animal/Animal_t.h Animal/Dog.cpp Animal/Dog.h Animal/Cat.cpp Animal/Cat.h)