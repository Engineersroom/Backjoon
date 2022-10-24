#include <stdio.h>

char score[1000];
char max = 0;
char tmp = 0;
float sum =0;
int a;
int main()
{

    scanf("%d", &a);

    for (int n = 0; n < a; n++)
    {
        scanf("%d", &tmp);
        score[n] = tmp;
        if (tmp > max)
        {
            max = tmp;
        }
    }
   // printf("max : %d",max);
    for (int n = 0; n < a; n++)
    {
        sum = sum + (float)((float)score[n]/(float)max)*100;
        //printf("%d->%lf",score[n],(float)((float)score[n]/(float)max)*100);
    }
    printf("%f",sum/(float)a);
}