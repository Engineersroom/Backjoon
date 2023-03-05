#include <stdio.h>

int a,b;
int arr[100];
int i,j,k;
int main() 
{
    scanf("%d %d",&a,&b);

    for (int cnt = 0 ; cnt < b ; cnt ++)
    {
        scanf("%d %d %d",&i,&j,&k);
        for(int c = (i-1); c < j ; c++)
        {
            arr[c] = k;
        }
    }

    for (int x = 0 ; x < a ; x ++)
    {
        printf("%d ",arr[x]);
    }
}