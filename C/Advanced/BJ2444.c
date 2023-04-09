#include <stdio.h>

int main()
{
    int i = 0;
    scanf("%d", &i);

    for (int n = 1; n < i; n++)
    {
        if (n < i)
        {
            for (int x = 0; x < (i - n); x++)
            {
                printf(" ");
            }
            for (int y = 0; y < (2 * n - 1); y++)
            {
                printf("*");
            }
        }
         printf("\n");
    }
    for (int n = i; n > 0 ; n--)
    {
        for (int x = (i - n); x > 0; x--)
        {
            printf(" ");
        }
        for (int y = (2 * n - 1); y > 0; y--)
        {
            printf("*");
        }
         printf("\n");
    }
   
}
