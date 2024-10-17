cmake_minimum_required(VERSION 3.29)
project(classes)
set(CMAKE_CXX_STANDART 20)

set(SOURCE_LIBS Armour.cpp
		ArmourType.h
		Warrior.cpp)

add_library(classes ${SOURCE_LIBS})