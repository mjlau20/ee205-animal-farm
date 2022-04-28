///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_lab_10d_animal_farm - EE 205 - Spr 2022
///
/// @file    updateCats.h
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    07_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "src/catDatabase.h"

extern void updateCatWeight( const unsigned long index, const float newWeight );

extern void updateCatName  ( const unsigned long index, const char* newName );

extern bool fixCat         ( const unsigned long index );
