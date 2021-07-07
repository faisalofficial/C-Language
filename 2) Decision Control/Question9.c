#include<stdio.h>

int main(){
    int marksA, marksB;

    printf("Enter Marks Of A: ");
    scanf("%d",&marksA);
    printf("Enter Marks Of B: ");
    scanf("%d",&marksB);

    if (marksA>=55 && marksB>=45){
        if (marksB>=55){
            printf("Passed The Degree");
        }else{
            printf("Failed The Exam");
        }
    } else if (marksB<=45 && marksA>=65){
        printf("Elegible To Reappear For Paper B");
    }else{
        printf("Failed The Degree");
    }

    return 0;
}