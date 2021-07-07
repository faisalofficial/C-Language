#include<stdio.h>

int main(){
    char inputCharacter;
    int asciiValue;

    printf("Enter any character : ");
    scanf("%c", &inputCharacter);

    // To get the ASCII value of any input character we need to
    // assign that value to an int variable which will store the to
    // ASCII value of that character.
    asciiValue = inputCharacter;

    if (asciiValue>=65 && asciiValue <= 90){
        // Condition for uppercase letters
        printf("ASCII Value of %c is %d.\nA captital letter.", inputCharacter, asciiValue);
    }else if(asciiValue>=97 && asciiValue <= 122){
        // Conditions for lowercase letters
        printf("ASCII Value of %c is %d.\nA small letter.", inputCharacter, asciiValue);
    }else if (asciiValue>=48 && asciiValue <= 57){
        // Condition for numerical value 0-9
        printf("ASCII Value of %c is %d.\nA digit.", inputCharacter, asciiValue);
    }else if ((asciiValue>=0 && asciiValue <= 47)||(asciiValue>=58 && asciiValue <= 64)||
    (asciiValue>=91 && asciiValue <= 96)||(asciiValue>=123 && asciiValue <= 127)){
        //Condition for special characters
        printf("ASCII Value of %c is %d.\nA special character.", inputCharacter, asciiValue);
    }
    return 0;
}