#include <stdio.h>

int arr[100];
int n,m,i,j;
int temp;
int main()
{
    for (int n = 0; n < 100; n++)
    {
        arr[n] = 1 + n;
    }
    scanf("%d %d",&n,&m);

    for (int n = 0; n<m;n++)
    {
        scanf("%d %d",&i,&j);
        temp=arr[j-1];
        arr[j-1] = arr[i-1];
        arr[i-1] = temp;
    }

    for (int v = 0;v<(n);v++)
    {
        printf("%d ",arr[v]);
    }

}