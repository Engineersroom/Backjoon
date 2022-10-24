#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int cnt = 0;
    int temp = 0;

    scanf("%d", &a);
    b = a;
    while (1)
    {
        cnt = cnt + 1;
        c = (a / 10 + a % 10);
        //printf("c: %d \n", c);
        if (c > 9)
        {
            d = (a % 10) * 10 + c % 10;
        }
        else
        {
            d = (a % 10) * 10 + c % 10;
        }
        //printf("d :%d \n", d);
        if (b == d)
            break;
        else
            a = d;
        // scanf("%d",&temp);
    }
    printf("%d", cnt);
}
