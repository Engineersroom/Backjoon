#include <stdio.h>
#define __TEST
#ifndef __TEST
int main()
{
    
    int a = 0;
    int b = 0;
    int c,d;
    scanf("%d\n%d",&a,&b);

    for (int n = 0; n < b ; n ++)
    {
        scanf("%d %d",&c,&d);
        a = a - (c*b);
    }
    if (a==0)
    printf("Yes\n");
    else 
    printf("No\n");

}

#endif
int main()
{
    int a,b,c,d,sum = 0;

    scanf("%d %d",&a,&b);

    for (int n = 0 ; n < b ; n++)
    {
        scanf("%d %d",&c,&d);
        sum += (c*d);
    }

    if (sum == a)
    printf("Yes");
    else
    printf("No");
}
