///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_lab_10d_animal_farm - EE 205 - Spr 2022
///
/// @file    deleteCats.cpp
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    07_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "deleteCats.h"



bool deleteAllCats() {

   memset( name[currentCats], 0, sizeof( name[currentCats] ) );
   gender [currentCats]  = UNKNOWN_GENDER ;
   breed  [currentCats]  = UNKNOWN_BREED ;
   isFixed[currentCats]  = false;
   weight [currentCats]  = 0.0;
   return true;
}