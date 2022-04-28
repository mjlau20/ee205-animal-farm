///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_lab_10d_animal_farm - EE 205 - Spr 2022
///
/// @file    reportCats.cpp
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    01_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <cstring>

#include "reportCats.h"
#include "src/catDatabase.h"


int findCat ( const char* newName ) {

   for (int count = 0; count < currentCats; count++) {
      if (strncmp(name[count], newName, MAX_CAT_NAME) == 0) {
         return count;
      }
   }
}

void printCat( const unsigned long index ) {

   if ( currentCats > index > 0 ) {
      printf("animalFarm0: Bad cat [%lu]", index);
   } else {
      printf("cat index = [%lu]  name = [%s]  gender = [%d]  breed = [%d]  isFixed = [%d]  weight = [%f]\n",
             index, name[index], gender[index], breed[index], isFixed[index], weight[index]);
   }
}

void printAllCats() {

   for ( int count = 0; count < currentCats; count++ ) {
      printf( "cat index = [%d]  name = [%s]  gender = [%d]  breed = [%d]  isFixed = [%d]  weight = [%f]\n",
               count, name[count], gender[count], breed[count], isFixed[count], weight[count] );
   }
}