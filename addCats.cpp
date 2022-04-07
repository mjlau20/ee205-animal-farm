///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_lab_10d_animal_farm - EE 205 - Spr 2022
///
/// @file    addCats.cpp
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    31_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "addCats.h"


int addCat( const char* newName,
            const enum  Gender newGender,
            const enum  Breed newBreed,
            const bool  newIsFixed,
            const float newWeight ) {

    if ( name == NULL ) {
        printf( "Cat database is full.\n" );
        exit( EXIT_FAILURE );
    }
    if ( strlen(newName) <= 0 ) {
        printf( "The cat must have a name.\n" );
        exit( EXIT_FAILURE );
    }
    if ( strlen(newName) > MAX_CAT_NAME - 1 ) {
        printf( "The cat's name must be < 30 characters.\n" );
        exit( EXIT_FAILURE );
    }
    for ( int count = 0; count < currentCats; count++ ) {
       if ( strncmp( name[count], newName, MAX_CAT_NAME ) == 0 ) {
          printf( "Cat name %s is already in the database.\n", newName );
          exit( EXIT_FAILURE );
       }
    }
    if ( newWeight < 0 ) {
        printf( "The cat's weight must be > 0.\n" );
        exit( EXIT_FAILURE );
    }

    strncpy( name[currentCats], newName, MAX_CAT_NAME );
    gender [currentCats] = newGender;
    breed  [currentCats] = newBreed;
    isFixed[currentCats] = newIsFixed;
    weight [currentCats] = newWeight;

    currentCats += 1;

    return 0;
}