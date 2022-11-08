#include <stdio.h>

int caseN = 0;
int cnt = 0;
int score = 0;
char words[100];
char al[26];
int flag = 0;

int main()
{

    scanf("%d", &caseN);

    for (int i = 0; i < caseN; i++)
    {
        for (int m = 0; m < 26; m++)
        {
            al[m] = -1;
        }

        scanf("%s", words);

        for (int m = 0; m < 100; m++)
        {
            if (words[m] == '\0')
            {
                break;
            }
            else
            {
                if (al[words[m] - 97] == -1)
                {
                    al[words[m] - 97] = 0;
                    cnt = 1;
                    flag = (words[m] - 97);
                    // printf("%d",al[(words[m] - 97)]);
                }
                else if (al[words[m] - 97] == 0)
                {
                    if (flag == (words[m] - 97))
                    {
                    }
                    else
                    {
                        cnt = 0;
                        break;
                    }
                }
            }
        }
        score = cnt + score;
    }
    printf("%d", score);
}