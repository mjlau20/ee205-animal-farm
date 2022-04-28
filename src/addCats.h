///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_lab_10d_animal_farm - EE 205 - Spr 2022
///
/// @file    addCats.h
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    31_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "catDatabase.h"

extern int addCat( const char* newName,
                   const enum Gender newGender,
                   const enum Breed newBreed,
                   const bool newIsFixed,
                   const float newWeight );
