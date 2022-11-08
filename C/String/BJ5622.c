#include <stdio.h>

char dial[15];
int time = 0;
int score = 0;

int main()
{
    scanf("%s",dial);
    for (int n = 0; n < 15; n++)
    {
        if (dial[n] == '\0')
        {
            break;
        }
        else
        {
            if (dial[n] >= 'A')
            score = 3;
            if (dial[n] >= 'D')
            score = score + 1;
            if (dial[n] >= 'G')
            score = score + 1;
            if (dial[n] >= 'J')
            score = score + 1;
            if (dial[n] >= 'M')
            score = score + 1;
            if (dial[n] >= 'P')
            score = score + 1;
            if (dial[n] >= 'T')
            score = score + 1;
            if (dial[n] >= 'W')
            score = score + 1;
 


            time = time + score ;
            score = 0;
        }
    }
    printf("%d",time);
}