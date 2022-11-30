#include <stdio.h>

int main()
{
    int M;
    int N;
    int min = -1;
    int sum = 0;
    int flag = 0;
    int first_flag = 0;

    scanf("%d %d", &M, &N);

    for (int target = M; target <= N; target++)
    {
        for (int m = 2; m <= target; m++)
        {
            if ((target % m) == 0)
            {
                if (flag == 0)
                {
                    flag = 1; // 소수다
                }
                else if (flag == 1)
                {
                    flag = 2; //소수가 아니다
                    break;
                }
            }
        }
        if (flag == 1) //소수인 경우
        {
            sum = sum + target;
            if (first_flag == 0)
            {
                min = target;
                first_flag = 1;
            }
        }
        flag = 0;
    }
    if (first_flag != 0)
    {
        printf("%d\n", sum);
    }
    printf("%d", min);
}