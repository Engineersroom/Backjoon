#include <stdio.h>

int main()
{
    int N = 0;
    int flag = 0;
    int tmp = 0;

    scanf("%d", &N);
    tmp = 2;
    while (1)
    {

        if (N % tmp == 0)
        {
            N = N / tmp;
            printf("%d\n", tmp);
        }
        else
        {

        tmp++;
            if (N == 1)
                break;
        }
    }
}