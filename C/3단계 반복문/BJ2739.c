#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    for (int n = 0 ; n < 9 ; n++ )
    {
        printf("%d * %d = %d\n",a,n+1,a*(n+1));
    }
}