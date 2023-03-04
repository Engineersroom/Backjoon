#include <stdio.h>

int main()
{
    unsigned long long int sum = 0;
    unsigned long long int a = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%lld", &a);
        sum = sum + a;
    }
    printf("%lld",sum);
}