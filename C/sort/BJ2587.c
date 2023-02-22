#include <stdio.h>

//5개 수를 입력받을때 중간값과 평균값을 구해라 

int main()
{
    int arr[5];
    int addr = 0;
    int min = 101;
    int sum = 0;
    int center = 0;
    int tarr[5];

    for (int n = 0; n < 5 ; n ++ )
    {
        scanf("%d",&arr[n]);
        sum = sum + arr[n];

    }
    for (int n = 0; n < 5; n++)
    {
        for (int m = 0; m < 5 ;m++)
        {
            if (min > arr[m])
            {
                min = arr[m];
                addr = m;
            }
        }
        tarr[n] = arr[addr];
        arr[addr] = 1002;
        min = 1001;
    }



    printf("%d\n",sum/5);
    printf("%d",tarr[2]);
}