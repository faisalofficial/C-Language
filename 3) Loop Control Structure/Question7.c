#include<stdio.h>

int main(){
    char confirmation;
    int userInput, positiveCount=0, negativeCount=0, zeroCount=0;

    while(1){
        printf("Enter Any Number : ");
        scanf("%d", &userInput);

        if (userInput==0){
            zeroCount++;
        }else if (userInput>0){
            positiveCount++;
        }else if(userInput<0){
            negativeCount++;
        }

        printf("Want to enter more [y/n]: ");
        scanf("%s", &confirmation);
        if(confirmation=='y'){
            continue;
        }else{
            break;
        }
    }

    printf("\nPositive Numbers Entered By User : %d", positiveCount);
    printf("\nNegative Numbers Entered By User : %d", negativeCount);
    printf("\nZeros Entered By User : %d", zeroCount);

    return 0;
}
