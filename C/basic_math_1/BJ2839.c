#include <stdio.h>

int main()
{
    int a, b, c, d = 0;
    int target = 0;
    int output = 0;
    int flag = 0;
    scanf("%d", &a);

    if ((a % 5) == 0)
    {
        output = a / 5;
    }
    else
    {
        for (int i = 0; (i * 3) < (a+1) ; i++)
        {
            for (int j = a/5;  j > -1 ; j--)
            {
                if( (j*5)+(i*3) == a )
                {
                    output = j + i ;
                    flag = 1;
                    break;
                }
                else 
                {
                    output = -1;
                }
            }
            if(flag == 1)
            {
                break;
            }
        }
    }
    printf("%d", output);
}