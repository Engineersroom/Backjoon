#include <stdio.h>

int main()
{
    int student[30];

    int tmp = 0;

    for (int n = 1; n < 31; n++)
    {
        student[n] = n;
    }
    for (int n = 1; n < 29; n++)
    {
        scanf("%d", &tmp);
        student[tmp] = 0;
    }
    for (int n = 1; n < 31; n++)
    {
        if (student[n]!=0)
        {
            printf("%d\n",student[n]);
        }
    }
}