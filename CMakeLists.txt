cmake_minimum_required(VERSION 3.22)
project(ee205_lab_10d_animal_farm)

set(CMAKE_CXX_STANDARD 14)

add_executable(ee205_lab_10d_animal_farm main.cpp catDatabase.cpp catDatabase.h addCats.cpp addCats.h reportCats.cpp reportCats.h updateCats.cpp updateCats.h deleteCats.cpp deleteCats.h)
