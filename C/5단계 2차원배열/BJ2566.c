#include <stdio.h>

int arr[9][9];

int main()
{
    int tmp = 0;
    int max = 0;
    int x,y ;
    for (int n = 0; n < 81; n++)
    {
        scanf("%d", &tmp);
        arr[n / 9][n % 9] = tmp;
        if (tmp >= max)
        {
            max = tmp;
            x = n/9;
            y = n%9;
        }
    }
    printf("%d\n", max);
    printf("%d %d",x+1,y+1);

}