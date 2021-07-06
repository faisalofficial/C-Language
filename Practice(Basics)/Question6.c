#include<stdio.h>

int main()
{
    int numberOne, numberTwo, temp;

    printf("Enter First Number : ");
    scanf("%d", &numberOne);
    printf("Enter Second Number : ");
    scanf("%d", &numberTwo);

    //Swaping logic
    temp = numberOne;
    numberOne = numberTwo;
    numberTwo = temp;

    printf("After Swapping\n---------------\nFirst Number : %d\nSecond Number : %d\n", numberOne, numberTwo);

    return 0;
}