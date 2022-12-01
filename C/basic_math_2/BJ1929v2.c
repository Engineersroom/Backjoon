#include <stdio.h>

#define max 1000000

int main()
{
    int flag = 0;
    int decimal[max] = {
        0,
    };
    int M, N;
    // for (int n = 0 ; n < max ; n++)
    // {
    //     decimal[n] =
    // }

    for (int n = 2; n < max; n++)
    {
        for (int m = 2; m <= n; m++)
        {
            if ((n % m) == 0)
            {
                if ( n == m )
                {
                    flag = 1;
                    decimal[n] = n;
                }
                else 
                {
                    flag = 2;
                    break;
                }
            }
        }
    }
    scanf("%d %d",&M,&N);

    for (int n = M; M<N ; n++)
    {
        if (decimal[n]!=0)
        {
            printf("%d\n");
        }
    }

}