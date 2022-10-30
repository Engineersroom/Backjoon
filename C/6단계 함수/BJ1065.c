#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N = 0;
    int a = 0; // 일의 자리
    int b = 0; // 십의 자리
    int c = 0; // 백의 자리
    int asd = 0;
    int cnt = 0;

    scanf("%d", &N);

    for (int i = 1; i < (N + 1); i++)
    {
        a = i % 10;
        b = (i % 100) / 10;
        c = (i / 100);
        // printf("1 : %d \n 10 : %d \n 100 : %d \n", a, b, c);
        if ((i / 10) == 0) // 한 자리
        {
            cnt = cnt + 1;
            //printf("%d \n", i);
        }
        else if ((i / 100) == 0) // 두자리
        {
            cnt = cnt + 1;
            //printf("%d \n", i);
        }
        else //세자리
        {
            if (((c - b)) == ((b - a)))
            {
                cnt = cnt + 1;
               // printf("%d \n",i);
            }
        }
    }
    printf("%d", cnt);
}