#include <stdio.h>
char a[100];
char tme[100];

int main(void)
{

    scanf("%s", a);

    for (int i = 0; i < 100; i++)
    {
        if (a[i] == '\0')
        {
            // printf("number of charicter %d \r\n",i);
            // break;

            // 입력받은 문열의 끝에 도달했을 때, 그 문자열을 뒤집어서 비교한다.
          //  printf("input : %s / last %d  \r\n", a, i);
          //  printf("Output:");
            // a 배열을 거꾸로 뒤집어서 tme 배열에 넣어야 한다.
            for (int j = i; j >= 0; j--)
            {
                tme[i - j] = a[j];
                // printf("%c", a[j]);
            }
            for (int k = 0 ; k <= i ; k ++)
            {
            //    printf("%c",tme[k]);
            }
            //printf("%s", tme);
           // printf("\r\n");

            for (int c = 0; c < i; c++)
            {
                if (a[c] == tme[c+1])
                {
                }
                else
                {

                    printf("0");
                    // for (int s = 0; s < i; s++)
                    // {
                    //     printf("compare : %d / original  %c copy %c \r\n", s, a[s], tme[c]);
                    // }
                    return 0;
                }
            }
            printf("1");
            return 0;
           
        }
    }
}
