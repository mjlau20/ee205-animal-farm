///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_lab_10d_animal_farm - EE 205 - Spr 2022
///
/// @file    updateCats.cpp
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    07_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <cstdlib>
#include <cstring>

#include "updateCats.h"



void updateCatWeight( const unsigned long index, const float newWeight ) {

   if ( newWeight < 0 ) {
      printf( "The cat's weight must be > 0.\n" );
      exit( EXIT_FAILURE );
   }
   weight[index] = newWeight;
}

void updateCatName( const unsigned long index, const char* newName ) {

   if ( strlen(newName) <= 0 ) {
      printf( "The cat must have a name.\n" );
      exit( EXIT_FAILURE );
   }
   if ( strlen(newName) > MAX_CAT_NAME - 1 ) {
      printf( "The cat's name must be < 30 characters.\n" );
      exit( EXIT_FAILURE );
   }
   for ( int count = 0; count < currentCats; count++ ) {
      if (strcmp(name[count], newName) == 0) {
         printf("Cat name %s is already in the database.\n", newName);
         exit(EXIT_FAILURE);
      }
   }
   strncpy( name[index], newName, MAX_CAT_NAME );
}

bool fixCat( const unsigned long index ) {

   if (index < 0 || index > currentCats) {
      printf("animalFarm0: Bad cat [%lu]", index);
      return false;
   }
   isFixed[index] = true;

   return true;
}