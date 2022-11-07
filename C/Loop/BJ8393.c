#include <stdio.h>

int main()
{
    int sum = 0;
    int a;
    scanf("%d",&a);

    for (int n = 0 ; n < a+1 ;n++ )
    {
        sum = n+sum;
    }
    printf("%d",sum);
}