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

#include <stdio.h>
#include <stdlib.h>

#include "reportCats.h"



int  findCat ( const char* newName ) {

   for ( int count = 0; count < currentCats - 1; count++ ) {
      if ( name[count] == newName ) {
         return count;
      }
      else {
         printf( "Cat name [%s] is not in the database\n", newName );
         exit( EXIT_FAILURE );
      }
   }
}

void printCat( const unsigned long index ) {

   if ( index < 0 || index > currentCats ) {
      printf("animalFarm0: Bad cat [%lu]", index);
   }
   else {
      printf( "cat index = [%lu] ", index,
                      "name = [%s] ",      name[index],
                      "gender = [%d] ",    gender[index],
                      "breed = [%d] ",     breed[index],
                      "isFixed = [%d] ",   isFixed[index],
                      "weight = [%f]",     weight[index]
                      );
   }
}

void printAllCats() {

   for ( int count = 0; count < currentCats - 1; count++ ) {
      printf( "cat index = [%d] ", count,
                      "name = [%s] ",      name[count],
                      "gender = [%d] ",    gender[count],
                      "breed = [%d] ",     breed[count],
                      "isFixed = [%d] ",   isFixed[count],
                      "weight = [%f]",     weight[count]
                      );
   }
}