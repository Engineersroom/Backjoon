#include <stdio.h>

int main()
{
    int a = 9;
    int max = 0;
    int tmp = 0;
    int tmp2 = 0;
    //scanf("%d",&a);

    for (int n = 0 ; n < 9 ; n++ )
    {
        scanf("%d",&a);
        if (a>max)
        {
        tmp = n+1;
        tmp2 = a;
        max = a;
        }
    }
    printf("%d\n%d",tmp2,tmp);
}