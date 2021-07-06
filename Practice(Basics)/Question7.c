#include<stdio.h>

int main(){
    int userInput, remainder, sum=0;

    printf("Enter a five digit number : ");
    scanf("%d",&userInput);

    remainder = userInput%10;
    sum+=remainder;
    userInput/=10;

    remainder = userInput%10;
    sum+=remainder;
    userInput/=10;

    remainder = userInput%10;
    sum+=remainder;
    userInput/=10;

    remainder = userInput%10;
    sum+=remainder;
    userInput/=10;

    remainder = userInput%10;
    sum+=remainder;

    printf("Sum of digit of numbers : %d", sum);
    return 0;
}