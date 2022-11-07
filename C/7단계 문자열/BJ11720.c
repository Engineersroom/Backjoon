#include <stdio.h>

int a;
char str[1000];
int sum = 0;

int main()
{

    scanf("%d", &a);
    scanf("%s", str);
    // // scanf("%s",str);
    // for (int i = 0; i < a; i++)
    // {
    //     printf("%d char : %d \n",i,str[i]-48);
    // }

    for (int i = 0; i < a; i++)
    {
        sum = sum + (int)(str[i] - 48);
    }
    printf("%d",sum);
}