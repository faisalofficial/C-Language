#include<stdio.h>

int main(){
    int sideA, sideB, sideC;

     printf("Enter Side A : ");
     scanf("%d", &sideA);
     printf("Enter Side B : ");
     scanf("%d", &sideB);
     printf("Enter Side C : ");
     scanf("%d", &sideC);

    if (sideA==sideB && sideB==sideC){
        printf("Equilateral Triangle");
    }else if (sideA==sideB && sideA!=sideC && sideB!=sideC){
        printf("Isoceles Triangle");
    }else if(sideA!=sideB && sideB!=sideC && sideC!=sideA){
        printf("Scalene Triangle");
    }

    return 0;
}