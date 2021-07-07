#include <stdio.h>

int main()
{
    int days;
    float fine;

    printf("Enter Number Of Days : ");
    scanf("%d", &days);

    if (days < 6)
    {
        fine = .5 * days;
        printf("Fine : %.2f", fine);
    }
    else if (days >= 6 && days < 11)
    {
        fine = 1 * days;
        printf("Fine : %.2f", fine);
    }
    else if (days > 10 && days < 31)
    {
        fine = 5 * days;
        printf("Fine : %.2f", fine);
    }
    else if (days > 30)
    {
        printf("Your Membership Has Been Canclled");
    }

    return 0;
}