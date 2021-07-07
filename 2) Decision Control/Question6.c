 #include<stdio.h>

 int main(){
     int sideA, sideB, sideC;

     printf("Enter Side A : ");
     scanf("%d", &sideA);
     printf("Enter Side B : ");
     scanf("%d", &sideB);
     printf("Enter Side C : ");
     scanf("%d", &sideC);

     if ((sideA+sideB>sideC)||(sideB+sideC>sideA)||(sideA+sideC>sideB)){
         printf("Trinagle Is Valid");
     }else {
         printf("Trinagle Is Not Valid");
     }

     return 0;
 }