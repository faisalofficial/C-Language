#include<stdio.h>

int main(){
    int number, temp, fact=1;

    printf("Enter number : ");
    scanf("%d", &number);

    temp = number;

    if (number == 0){
        printf("Factorial of 0 : %d", fact);
    }else if (number>0){
        for(int i=0;i<number;i++){
            fact*=temp;
            temp--;
        }
        printf("Factorial of %d : %d", number, fact);
    }
    return 0;
}