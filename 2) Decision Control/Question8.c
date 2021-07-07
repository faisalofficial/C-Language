#include <stdio.h>

int main()
{
    int hours;

    printf("Enter hours an emplyee has worked : ");
    scanf("%d", &hours);

    if (hours >= 2 && hours <= 3)
    {
        printf("Highily Efficient Worker");
    }
    else if (hours >= 3 && hours <= 4)
    {
        printf("Worker Need To Improve His Speed");
    }
    else if (hours >= 4 && hours <= 5)
    {
        printf("Worker Need To Improve His Speed, Training Needed.");
    }
    else if (hours >= 5)
    {
        printf("Fire The Worker");
    }

    return 0;
}