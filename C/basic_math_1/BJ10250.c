#include <stdio.h>

int main()
{
    int h = 0;
    int w = 0;
    int caseNum = 0;
    int Num = 0;

    int H = 0;
    int W = 0;
    scanf("%d", &caseNum);

    for (int i = 0; i < caseNum; i++)
    {
        scanf("%d %d %d", &h, &w, &Num); // h 층 w폭 num 몇번쨰손님?

        H = Num % h;
        if (Num % h == 0)
        {
            H = h;
        }
        W = ((double)Num / h) + 0.99;
        // printf("H : %d ",H);
        // printf("W : %d \n",W);
        if (W < 10)
        {
            printf("%d0%d\n", H, W);
        }
        else
        {
            printf("%d%d\n", H, W);
        }
    }
}