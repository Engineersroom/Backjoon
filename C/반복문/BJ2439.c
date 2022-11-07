
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);

    for (int n = 0; n < a; n++)
    {
        for (int m = a; m-n-1 > 0; m--)
        {
            printf(" ");
        }
        for (int m = 0; m < n + 1; m++)
        {
            printf("*");
        }
        printf("\n");
    }
}