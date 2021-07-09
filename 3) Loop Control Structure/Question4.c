#include<stdio.h>

int main(){
    char equivalent;

    for(int i=0; i<=255;i++){
        equivalent=i;
        printf("ASCII : %d, Equivalent Character : %c\n", i, equivalent);
    }
    return 0;
}