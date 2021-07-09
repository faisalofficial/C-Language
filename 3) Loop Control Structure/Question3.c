#include<stdio.h>

int main(){
    int number, power, product=1;

    printf("Enter Base: ");
    scanf("%d", &number);
    printf("Enter Power: ");
    scanf("%d", &power);

    if(power==0){
        printf("%d power %d : %d", number, power, product);
    }else if(power>0){
        for(int i = 0; i<power; i++){
            product*=number;
        }
        printf("%d power %d : %d", number, power, product);
    }else{
        printf("Enter correct Value of Power");
    }
    return 0;
}