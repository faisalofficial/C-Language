#include <stdio.h>

int main()
{
    int lastTerm, temp, fact = 1;
    float sum = 0, fractional=0;

    printf("Enter last term : ");
    scanf("%d", &lastTerm);

    if (lastTerm == 0)
    {
        printf("Factorial of Series : %d", sum);
    }

    while (lastTerm > 0)
    {
        temp = lastTerm;
        for (int i = temp; i < 0; i--)
        {
            fact *= i;
        }
        fractional = (lastTerm / fact);
        sum += fractional;
        lastTerm--;
    }

    printf("Factorial of Series : %f", sum);

    return 0;
}
