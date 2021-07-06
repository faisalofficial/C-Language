#include<stdio.h>
int main(){
    int numberOfMen, numberOfWomen, numberOfLiteratemen, numberofIlliterateMen, totalLiteracy;
    int totalPopulation = 80000;
    int totalPercentageOfLiteracy = 45, totalPercentageOfLiterateMen = 35, totalPercentageOfMen = 52;

    numberOfMen = (totalPopulation*totalPercentageOfMen)/100;
    numberOfLiteratemen = (totalPopulation*totalPercentageOfLiterateMen)/100;
    numberofIlliterateMen = numberOfMen - numberOfLiteratemen;
    numberOfWomen = totalPopulation - numberOfMen;

    printf("Number of men : %d\nNumber of Illiterate men : %d,\nNumber of numberOfWomen : %d",
    numberOfMen, numberofIlliterateMen, numberOfWomen);

    return 0;
}