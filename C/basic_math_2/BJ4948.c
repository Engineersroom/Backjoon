#include <stdio.h>
#define max 1000001

int arr[max];

int main()
{
    while (1)
    {
        int M = 0;
        int N = 0;
        int cnt = 0;

        //에라토스테네스의 체 구현

        scanf("%d", &M);
        if (M==0)
        {
            break;
        }
        N = 2 * M;
        for (int i = 2; i <= N; i++)
        {
            arr[i] = i;
        }

        for (int i = 2; i <= N; i++)
        {
            if (arr[i] == 0)
            {
            }
            else
            {
                for (int m = 2; m * i <= N; m++)
                {
                    arr[i * m] = 0;
                }
            }
        }

        for (int k = M; k <= N; k++)
        {
            if (arr[k] != 0)
            {
                if (arr[k]!=M)
                {
                //printf("%d\n",arr[k]);
                cnt = cnt + 1;
                }
            }
        }
        printf("%d\n", cnt);
    }
}