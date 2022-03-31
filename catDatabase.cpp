///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_lab_10d_animal_farm - EE 205 - Spr 2022
///
/// @file    catDatabase.cpp
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    31_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "catDatabase.h"

char  name[MAX_CATS][MAX_CAT_NAME];
float weight[MAX_CATS];
bool  isFixed[MAX_CATS];
enum  Gender gender[MAX_CATS];
enum  Breed breed[MAX_CATS];
