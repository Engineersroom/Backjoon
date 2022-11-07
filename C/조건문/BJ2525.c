#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d",&c);

    b = b + c; 
    if (b>59)
    {
        int d = b / 60; 
        b = b - 60*d;
        a = a + d;
    }
    if (a>23)
    {
        a = a - 24 ;
    }
    
    printf("%d %d",a,b);

    
}