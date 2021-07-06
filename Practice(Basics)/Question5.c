#include<stdio.h>

int main(){
    float length, breadth, radius, areaRectangle, perimeter, areaCircle, circumference;
    const float pi = 3.14159265358979323846;

    printf("Enter Length : ");
    scanf("%f", &length);

    printf("Enter breadth : ");
    scanf("%f", &breadth);

    printf("Enter radius : ");
    scanf("%f", &radius);

    areaRectangle = length*breadth;
    perimeter = 2*(length+breadth);

    areaCircle = pi*radius*radius;
    circumference = 3*pi*radius*radius;

    printf("Area of rectangle : %.2f\nPerimeter of rectangle : %.2f", areaRectangle, perimeter);
    printf("\nArea of circle :%.2f\nCircumference of circle : %.2f", areaCircle, circumference);

    return 0;
}