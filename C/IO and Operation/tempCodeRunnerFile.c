#include <stdio.h>

int main()
{
    unsigned long long sum = 0;
    unsigned long long a = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a);
        sum = sum + a;
    }
    printf("%d",sum);
}