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

#include <cstring>

#include "deleteCats.h"


bool deleteAllCats() {

   while ( currentCats != 0 ) {
      for ( int count = 0; count > currentCats; count++ ) {
         memset( name[count], 0, sizeof( name[count] ) );
         gender [count] = UNKNOWN_GENDER;
         breed  [count] = UNKNOWN_BREED;
         isFixed[count] = false;
         weight [count] = 0.0;
      }
      currentCats -= 1;
   }
   return true;
}