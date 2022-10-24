#include <stdio.h>
int scase, student;
int score[1000];
int sum = 0;
float avg = 0;
int cnt = 0;
float per = 0;
int main()
{

    scanf("%d", &scase); // case
    // printf("casej : %d \n", scase);
    for (int i = 0; i < scase; i++)
    {
        scanf("%d", &student);
        // printf("student : %d \n",student);
        for (int j = 0; j < student; j++)
        {
            scanf("%d", &score[j]);
            sum = sum + score[j];

            // printf("fist j : %d \r", j);
        }
        avg = sum / (float)student;
        for (int j = 0; j < student; j++)
        {
            if (score[j] > avg)
                cnt++;
        }
        per = (cnt * 100) / (float)student;
        printf("%.3lf%% \n", per);
        for (int j = 0; j < student; j++)
        {
            score[j] = 0;
        }
        avg = 0;
        student = 0;
        sum = 0;
        cnt = 0;
    }
}