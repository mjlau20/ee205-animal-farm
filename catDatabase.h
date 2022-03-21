///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file    catDatabase.h
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <stdio.h>
#include <stdlib.h>

#define MAX_CATS     (30)
#define MAX_CAT_NAME (30)
#define CURRENT_CATS  (size_t cats)

enum Gender { UNKNOWN_GENDER, FEMALE, MALE };
enum Breed  { UNKNOWN_BREED, MAINE_COON, SHORTHAIR, PERSIAN, SPHYNX, MANX };

extern char  name[MAX_CATS][MAX_CAT_NAME];
extern float weight[MAX_CATS];
extern bool  isFixed[MAX_CATS];
extern enum  Gender gender[MAX_CATS];
extern enum  Breed breed[MAX_CATS];
