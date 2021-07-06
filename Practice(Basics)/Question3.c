#include<stdio.h>

int main(){
    int m1, m2, m3, m4, m5;
    float aggregate;

    printf("Enter marks of subject1: ");
    scanf("%d", &m1);
    printf("Enter marks of subject2: ");
    scanf("%d", &m2);
    printf("Enter marks of subject3: ");
    scanf("%d", &m3);
    printf("Enter marks of subject4: ");
    scanf("%d", &m4);
    printf("Enter marks of subject5: ");
    scanf("%d", &m5);

    aggregate = (m1+m2+m3+m4+m5)/5;
    
    printf("Aggregate Marks: %f\nPercentage Marks: %f", aggregate, aggregate);

    return 0;
}