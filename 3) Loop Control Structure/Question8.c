#include <stdio.h>

int main()
{
    int flag;

    for (int i = 0; i <= 300; i++)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d : Prime Number\n", i);
        }
        else if (flag == 1)
        {
            printf("%d : Not Prime\n", i);
        }
    }

    return 0;
}
