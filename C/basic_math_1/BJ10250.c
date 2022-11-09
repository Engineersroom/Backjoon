#include <stdio.h>

int main()
{
    int h = 0;
    int w = 0;
    int caseNum = 0;
    int Num =0;

    int H = 0;
    int W = 0;
    scanf("%d",&caseNum);

    for (int i = 0 ; i < caseNum ; i ++ )
    {
        scanf("%d %d %d",&h,&w,&Num);//h 층 w폭 num 몇번쨰손님?

        H = Num%h;
        if (Num == h)
        {
            H = h;
        }
        if (h == 1)
        {
            H = 1;
        }
        W = Num/h+1;
        if (h==1)
        {
            W=Num;
        }
        if (W < 10)
        {
            printf("%d0%d\n",H,W);
        }
        else
        {
           printf("%d%d\n",H,W); 
        }
        
    }

}