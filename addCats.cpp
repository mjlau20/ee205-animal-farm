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

#include "addCats.h"

int addCat( const char newName[], const enum Gender newGender, const enum Breed newBreed,
            const bool newIsFixed, const float newWeight ) {

    if ( name != 0 ) {
        printf( "Cat database is full.\n" );
        exit( 1 );
    }
    if ( strlen(newName) <= 0 ) {
        printf( "The cat must have a name.\n" );
        exit( 1 );
    }
    if ( strlen(newName) > MAX_CAT_NAME ) {
        printf( "The cat's name must be > 30 characters.\n" );
        exit( 1 );
    }
    if ( strcmp( name[MAX_CATS], newName ) == 0 ) {
        printf( "Cat name %s is already in the database.\n", name );
        exit( 1 );
    }
    if ( newWeight < 0 ) {
        printf( "The cat's weight must be > 0.\n" );
        exit( 1 );
    }

    strcpy( name[MAX_CATS], newName );
    gender[MAX_CATS] = newGender;
    breed[MAX_CATS] = newBreed;
    isFixed[MAX_CATS] = newIsFixed;
    weight[MAX_CATS] = newWeight;

    return 0;
}
