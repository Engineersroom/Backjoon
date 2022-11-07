
#include <stdio.h>

int main()
{
    int a, b, c;

    do
    {
        scanf("%d %d", &a, &b);
        if ((a==0)&&(b==0))
        break;
        else 
        {
            printf("%d \n",a+b);
        }
    } while (1);
}