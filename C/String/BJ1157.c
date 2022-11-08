#include <stdio.h>
// Test log
int main()
{
    int al[26];        // 알파벳은 24개
    char str[1000005]; //단어의 길이는 1,000,000개를 넘지 않는다
    int tmp = 0;       //임시 변수
    int max = -1;
    int max_flag = 0;
    int keep = 0;

    scanf("%s", str); //단어를 입력 받는다

    //배열을 -1로 초기화 한다
    for (int n = 0; n < 26; n++)
    {
        al[n] = -1;
    }
    for (int n = 0; n < 1000005; n++)
    { //일단 배열의 끝까지 반복하는데

        //  NULL이 나오면 종료한다
        if (str[n] == '\0')
        {
            // printf("%d \n", n);
            tmp = n;
            break;
        }
        else // 0이 아니면 뭐가 들어있는지 분석한다
        {
            for (int m = 97; m < 124; m++)
            {
                if ((str[n] == m) || (str[n] == (65 + m - 97)))
                {
                    
                    if (al[m - 97] == -1)
                        al[m - 97] = 1;
                    else
                        al[m - 97] = al[m - 97] + 1;
                }
            }
        }
    }

    // for (int n = 0; n < 26; n++)
    // {
    //     printf("%d %d \n", n, al[n]);
    // }

    for (int n = 0; n < 26; n++)
    {
        if (al[n] > max)
        {
            max = al[n];
            max_flag = 0;
            keep = n;
        }
        else if (al[n] == max)
        {
            max_flag = 1;
        }
    }
    if (max_flag == 1)
    {
        printf("?");
    }
    else
    {
        printf("%c", keep + 65);
    }
}
