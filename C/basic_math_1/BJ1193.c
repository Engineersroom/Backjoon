#include <stdio.h>

int main()
{

    int target = 0;
    int temp = 0;
    int den = 0; // 분모
    int num = 0; // 분자
    int temp2 = 0;

    scanf("%d", &target);

    target = target;
    for (int n = 1; n < 10000000; n++)
    {
        //n은 몇 번째 묶음인지 판단하는 요소
        temp = n + temp;
        //temp 는 몇 번재 묶음에 속했는지 계산하기 위한 변수

        if (target <= temp)
        {
           // printf("묶음 번호 : %d \n",n);
            temp2 = target-(temp-n)-1;
           // printf("묶음에서 어디에 위치하는가 ? %d \n",temp2);
            

            //temp2는 몇번째 묶음에 속했는지 정했으면, 그 묶음에서 몇번째 위치에 있는지 알아야 한다
            //5의 경우 3번째 묶음 2번째
            //6의 경우 3번째 묶음 3번째
            //몇 번째 묶음인지 그 묶음의 번호가 짝수인지 홀수인지 판단해서 분모 분자의 증감을 결정함
            if (n % 2 == 0)
            {

                num = 1+temp2; //분자
                den = n-temp2; //분모

                break;
            }
            else
            {

                num = n-temp2; //분자
                den = 1+temp2;  //분모

                break;
            }
        }

        
    }
    printf("%d/%d", num, den);
}