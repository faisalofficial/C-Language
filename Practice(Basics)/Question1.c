/*
Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance 
is 20% of basic salary. Write a program to calculate his gross salary
*/

#include<stdio.h>

int main(){
    float rameshBasicSalalry, dearnessAllowance, houseRentAllowence, grossSalary;

    printf("Enter Ramesh's Basic Salary : ");
    scanf("%f", &rameshBasicSalalry);

    // This calculation has to done this way because of the level of 
    // hierchy of the different operators
    dearnessAllowance = (40*rameshBasicSalalry)/100;
    houseRentAllowence = (20*rameshBasicSalalry)/100;

    grossSalary = (rameshBasicSalalry+dearnessAllowance+houseRentAllowence);

    printf("Gross Salary of Ramesh : %f", grossSalary);

    return 0;
}