#include <stdio.h>

int main()
{
    long  A = 0;
    long  B = 0;
    long C = 0;
    long tmp = 0;
    int flag = 0;
    scanf("%d %d %d", &A, &B, &C);

    if ( (C-B) <= 0 )
    {
        printf("%d",-1);
        return 0;
    }
    else
    {
      printf("%d",(A/(C-B)+1));
      return 0;  
    }

    //printf("%d", tmp);
}