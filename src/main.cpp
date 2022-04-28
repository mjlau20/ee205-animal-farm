///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_lab_10d_animal_farm - EE 205 - Spr 2022
///
/// @file    main.cpp
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    31_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "src/catDatabase.h"
#include "src/addCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"


int main() {

   printf( "Starting Animal Farm 1\n" );

   initializeDatabase();

   addCat( "Loki", MALE, PERSIAN, true, 8.5 ) ;
   addCat( "Milo", MALE, MANX, true, 7.0 ) ;
   addCat( "Bella", FEMALE, MAINE_COON, true, 18.2 ) ;
   addCat( "Kali", FEMALE, SHORTHAIR, false, 9.2 ) ;
   addCat( "Trin", FEMALE, MANX, true, 12.2 ) ;
   addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0 ) ;


   printAllCats();
   int kali = findCat( "Kali" ) ;
   printCat( kali );
   updateCatName( kali, "Capulet" ) ;
   updateCatWeight( kali, 9.9 ) ;
   fixCat( kali ) ;
   printCat( kali );

   deleteAllCats();
   printAllCats();

   printf( "Done with Animal Farm 1\n" );
}
