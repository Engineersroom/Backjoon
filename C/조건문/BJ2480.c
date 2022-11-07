#include <stdio.h>
#ifndef max
#define max(a, b) (((a) > (b)) ? (a) : (b))
#endif
int main()
{
    int a, b, c;
    int score;
    scanf("%d %d %d", &a, &b, &c);
    if ((a == b) && (b == c))
    {
        score = 10000 + 1000 * a;
    }
    else if ((a == b))
    {
        score = 1000 + 100 * a;
    }
    else if ((b == c))
    {
        score = 1000 + 100 * b;
    }
    else if ((a == c))
    {
        score = 1000 + 100 * a;
    }
    else
    {
        int temp = max(max(a, b), c);
        score = temp*100;
    }
    printf("%d",score);
}