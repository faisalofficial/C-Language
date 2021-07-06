/*
The distance between two cities (in km.) is input through the keyboard. 
Write a program to convert and print this distance in meters, feet, inches and centimeters.
*/

#include<stdio.h>

int main(){
    float inKilometer, inMeters, inFeet, inInches, inCemtimeters;

    /*
    CONVERSION PARAMETERS:
    1 km = 1000 m
    1 km = 3280.84 feet
    1 km = 39370.1 inches
    1 km = 100000 cm
    */

   printf("Enter Distance (in km) : ");
   scanf("%f", &inKilometer);

   inMeters = inKilometer*1000;
   inFeet = inKilometer*3280.84;
   inInches = inKilometer*39370.1;
   inCemtimeters = inKilometer*100000;

   printf("The distances in different unit are as follows : ");
   printf("\nIn Meters : %f\nIn Feet : %f\nIn Inches : %f\nIn Centimeter : %f",
    inMeters, inFeet, inInches, inCemtimeters);

    return 0;
}