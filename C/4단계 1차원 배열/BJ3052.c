#include <stdio.h>
int na[42];
int a;
int cnt = 0;
int main()
{

   

    for (int n = 0; n < 10; n++)
    {
        scanf("%d", &a);
        na[a % 42] = na[a % 42] + 1;
        //printf("nama %d \n", a % 42);
        //printf("na[%d]=%d",a%42,na[a%42]);
    }
    for (int n = 0; n < 42; n++)
    {
        if (na[n] != 0)
        {
            cnt++;
            //printf("na[%d]",na[n]);
        }
    }
    printf("%d", cnt);
}