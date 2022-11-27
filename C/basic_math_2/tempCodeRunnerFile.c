#include <stdio.h>

int main()
{
    int Ncase = 0;
    int input = 0;
    int cnt = 0;
    int sosu =0;

    scanf("%d", &Ncase);

    for (int i = 0; i < Ncase; i++)
    {
        scanf("%d", &input);
        for (int m = 2; m <=input; m++)
        {
            if (input % m == 0)
            {
                cnt = cnt + 1;
            }
            if (cnt > 2)
            {
                break;
            }
        }
        if (cnt == 1)
        {
            //printf("%d ",input);
            sosu = sosu + 1;
            cnt = 0;
        }

    }
    printf("%d",sosu);
}