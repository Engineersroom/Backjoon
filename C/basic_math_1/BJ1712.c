#include <stdio.h>

int main()
{
    long  A = 0;
    long  B = 0;
    long  C = 0;
    long tmp = 0;
    int flag = 0;
    scanf("%d %d %d", &A, &B, &C);

    for (long n = 0; n < 2100000000; n++)
    {
        if ((C * n) >= (A + B * n))
        {
            tmp = n;
            break;
        }
    }
    if (tmp == 0)
    {
        tmp = -1;
    }
    printf("%d", tmp);
}