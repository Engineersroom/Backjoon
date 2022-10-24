#include <stdio.h>

int main()
{
    int min = 1000000;
    int max = -10000000;
    int num = 0;
    int tmp = 0;
    scanf("%d", &num);

    for (int n = 0; n < num; n++)
    {
        scanf("%d", &tmp);
        if (tmp >= max)
            max = tmp;
        if (tmp <= min)
            min = tmp;
    }
    printf("%d %d",min,max);
}