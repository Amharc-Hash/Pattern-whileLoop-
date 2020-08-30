#include<stdio.h>
int main()
{
    int a;
    int i, j;
    scanf_s("%d", &a);
    i = 1;
    while (i <= a)
    {
        j = 1;
        while (j <= a)
        {
            if ((j + i) % 2 == 0)
            {
                printf("-");
                j++;
            }
            else if ((j + i) % 2 == 1)
            {
                printf("*");
                j++;
            }
        }
        printf("\n");
        i++;
    }

    return 0;
}