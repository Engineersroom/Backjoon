
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);

    for (int n = 0; n < a; n++)
    {
        scanf("%d",&c);
        if (c < b)
        {
            printf("%d ",c);
        }
    }
}