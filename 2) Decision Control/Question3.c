#include <stdio.h>

int main()
{
    int sex, helthCondition, livingIn, age;

    printf("You live in\n1)City\n2)\nEnter : ");
    scanf("%d", &livingIn);

    if (livingIn == 1)
    {
        //Condition for city
        printf("Enter Your Age : ");
        scanf("%d", &age);
        if (age >= 25 && age <= 35)
        {
            printf("Health Condition \n1)Excellent\n2)Poor\nEnter : ");
            scanf("%d", &helthCondition);
            if (helthCondition == 1)
            {
                printf("Sex \n1)Male\n2)\nEnter : ");
                scanf("%d", &sex);
                if (sex == 1)
                {
                    printf("You are inssured.\nYou can book insurance upto Rs. 2,00,000\n");
                    printf("\nYou premium will be Rs 4 per thousand.");
                }
                else if (sex == 2)
                {
                    printf("You are inssured.\nYou can book insurance upto Rs. 1,00,000\n");
                    printf("\nYou premium will be Rs 3 per thousand.");
                }
                else
                {
                    printf("Enter correct input.");
                }
            }
            else if (helthCondition == 2)
            {
                printf("You Are Not Elegible For This Insurance");
            }
            else
            {
                printf("Enter correct input.");
            }
        }
        else
        {
            printf("You Are Not Elegible For This Insurance");
        }
    }
    else if (livingIn == 2)
    {
        // condition for village
        printf("Enter Your Age : ");
        scanf("%d", &age);
        if (age >= 25 && age <= 35)
        {
            printf("Health Condition \n1)Excellent\n2)\nEnter : ");
            scanf("%d", &helthCondition);
            if (helthCondition == 2)
            {
                printf("Sex \n1)Male\n2)Female\nEnter : ");
                scanf("%d", &sex);
                if (sex == 1)
                {
                    printf("You are inssured.\nYou can book insurance upto Rs. 10,000\n");
                    printf("\nYou premium will be Rs 6 per thousand.");
                }
                else if (sex == 2)
                {
                    printf("You Are Not Elegible For This Insurance");
                }
                else
                {
                    printf("Enter correct input.");
                }
            }
            else if (helthCondition == 1)
            {
                printf("You Are Not Elegible For This Insurance");
            }
            else
            {
                printf("Enter correct input.");
            }
        }
        else
        {
            printf("You Are Not Elegible For This Insurance");
        }
    }

    return 0;
}