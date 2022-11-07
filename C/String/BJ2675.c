#include <stdio.h>
char chararr[20];
int main()
{
    int caseNum = 0;
    int latterNum = 0;
    int tmp = 0;

    scanf("%d", &caseNum);

    for (int caseNumCnt = 0; caseNumCnt < caseNum; caseNumCnt++)
    {
        scanf("%d", &latterNum);
        scanf("%s", chararr);
        for (int n = 0; n < 101; n++)
        { //일단 배열의 끝까지 반복하는데
            //  NULL이 나오면 종료한다
            if (chararr[n] == '\0')
            {
                // printf("%d \n", n);
                tmp = n;
                break;
            }
        }

        for (int m = 0; m < tmp; m++)
        {
            for (int n = 0; n < latterNum; n++)
            {
                printf("%c", chararr[m]);
            }
        }
        printf("\n");
    }
}