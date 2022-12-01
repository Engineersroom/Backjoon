#include <stdio.h>
#define max 1000001

int arr[max];

int main()
{
    int M = 0;
    int N = 0;


    //에라토스테네스의 체 구현

    scanf("%d %d", &M, &N);
    for (int i = 2 ; i <= N; i ++)
    {
        arr[i] = i;
    }

    for (int i = 2 ; i <= N ; i ++)
    {
        if (arr[i] == 0)
        {

        }
        else 
        {
            for (int m = 2 ; m*i <= N; m++)
            {
            arr[i*m] = 0;
            }
        }
    }
    
    for (int k = M ; k <= N ; k++)
    {
        if (arr[k]!=0)
        {
            printf("%d\n",arr[k]);
        }
    }
}