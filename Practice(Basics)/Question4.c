#include<stdio.h>

int main(){
    float fahrenheit, celsius;

    printf("Enter Temperature(Fahrenheint) : ");
    scanf("%f", &fahrenheit);

    celsius = (5*(fahrenheit-32))/9;
    printf("Temperature in Celsius : %.2f\n",celsius);

    return 0;
}