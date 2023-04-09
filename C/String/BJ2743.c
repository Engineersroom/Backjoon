#include <stdio.h>

char str[101];
int k;

int main()
{

    for (int i = 0 ; i < 101 ; i ++)
    {
        str[i]  = 0;
    }
    scanf("%s",str);
    for (int i = 0 ; i < 101 ; i ++)
    {
        if(str[i]==0)
        {
            k = i;
            break;
        }
    }
    printf("%d",k);

}