#include <stdio.h>

int main()
{
    int a;
    char b[80];
    int sum = 0;
    int score_flag = 0;
    int score = 0;
    int score_sum = 0;

    scanf("%d", &a); // case 입력

   



    for (int k = 0; k < a; k++)
    {
         scanf("%s", b);
        for (int n = 0; n < 80; n++)
        {
            if ((b[n] == 'O') || (b[n] == 'X'))
            {

                if ((b[n] == 'O') && (score_flag == 1))
                {
                    score = score + 1;
                    score_sum = score_sum + score;
                    score_flag = 1;
                }
                else if (b[n] == 'O')
                {
                    score = 1;
                    score_flag = 1;
                    score_sum = score_sum + score;
                }
                else if (b[n] == 'X')
                {
                    score_flag = 0;
                    score = 0;
                }
                //printf("n cycle %d\n", score_sum);
            }
            else if (b[n]='\0')
            break;
        }
        printf("%d\n", score_sum);
        score_sum=0;
        score= 0;
        score_flag =0;
        
        for (int c = 0 ; c < 80 ; c ++)
        {
            b[c] = 0;
        }
    }
}