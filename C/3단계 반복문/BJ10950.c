#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);

    for (int n = 0 ; n < a ; n++ )
    {
        scanf("%d %d",&b,&c);
        printf("%d\n",b+c);
    }
}