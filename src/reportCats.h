///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_lab_10d_animal_farm - EE 205 - Spr 2022
///
/// @file    reportCats.h
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    01_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "src/catDatabase.h"

extern int  findCat     ( const char* newName );

extern void printCat    ( const unsigned long index );

extern void printAllCats();
