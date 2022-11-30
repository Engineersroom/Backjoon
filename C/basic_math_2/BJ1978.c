#include <stdio.h>

int main()
{
    int Ncase = 0;
    int tmp = 0;
    int a = 0;
    int target = 0;
    int flag = 0;
    int cnt = 0;

    scanf("%d",&Ncase);

    for (int n = 0; n < Ncase ; n++)
    {
        scanf("%d",&target);

        for (int m = 2; m <= target ; m ++)
        {
            if ( (target%m)== 0)
            {
                if(flag == 0)
                {
                    flag = 1;
                }
                else if (flag == 1)
                {
                    flag = 2;
                    break;
                }
            }
        
        }
        if (flag == 1)
        {
            cnt = cnt + 1;
        }
        flag = 0;
    }
    printf("%d",cnt);
}