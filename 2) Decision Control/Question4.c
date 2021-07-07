#include<stdio.h>

int main(){
    int hardness, tensileStrength;
    float carbonContent;

    printf("Enter Value of hardness : ");
    scanf("%d",&hardness);
    printf("Enter Value of Tensile Strength : ");
    scanf("%d",&tensileStrength);
    printf("Enter Value of carbonContent : ");
    scanf("%f",&carbonContent);

    if(hardness>50 && tensileStrength>5600 && carbonContent<0.7){
        //For grade 10
        printf("Grade Ten Steel");
    }else if (hardness>50 && carbonContent<0.7){
        // For grade 9
        printf("Grade Nine Steel");
    }else if (hardness>50 && tensileStrength>5600 && carbonContent<0.7){
        // For grade 8
        printf("Grade Eight Steel");
    }else if (hardness>50 && tensileStrength>5600){
        // For grade 7
        printf("Grade Seven Steel");
    }else if (hardness>50 || tensileStrength>5600 || carbonContent<0.7){
        // For grade 6
        printf("Grade Six Steel");
    }else {
        // For grade 5
        printf("Grade Five Steel");
    }
    return 0;
}