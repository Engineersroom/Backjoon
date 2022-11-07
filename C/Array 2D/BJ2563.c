#include <stdio.h>

int arr[100][100];
int Case = 0;
int sX, sY = 0;
int cnt = 0;

int main()
{
    scanf("%d",&Case);
    for (int n = 0 ; n < Case ; n ++)
    {
        scanf("%d %d",&sX,&sY);
        for (int tX = sX ; tX < (sX+10); tX++)
        {
            for (int tY = sY ; tY < (sY+10); tY++)
            {
                arr[tX][tY] = 1;
            }
        }
    }
    for (int nX = 0 ; nX < 100 ; nX++)
    {
        for (int nY = 0; nY < 100 ; nY++)
        {
            if (arr[nX][nY]==1)
            {
                cnt = cnt + 1;
            }
        }
    }
    printf("%d",cnt);
}