#include <stdio.h>

int main()
{
    int num = 0;
    int arr[100] = {
        0,
    };
    int tmp = 0;
    int find = 0;
    int cnt =0;
    scanf("%d", &num);

    for (int n = 0; n < num; n++)
    {
        scanf("%d", &tmp);
        arr[n] = tmp;
    }
    scanf("%d",&find);

    for (int n = 0; n < num; n++)
    {
        if (arr[n]==find)
        cnt = cnt + 1;
    }
    printf("%d",cnt); 
}