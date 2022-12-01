#include <stdio.h>
#define max 10001
//골드바흐의 추축
// 2보다 큰 작수는 두 소수의 합으로 나타낼 수 있다

// 1. 소수를 구한다
// 2. 짝수를 입력 받으면 작은 소수부터 빼본다
// 3. 빼고 남은 수가 소수인지 판별한다
// 4. 아니면 up.
// 5. 수의 절반이 될 때 까지 진행한다
// 6. 가장 마지막으로 성공적으로 진행한 경우를 출력
int arr[max];

int main()
{

    // printf("Test\n");
    int M = 0;
    int N = 0;

    int Ncase = 0;
    int Ninput = 0;

    int tmp = 0;
    int minus = 0;
    int index = 0;

    int lastPrime1 = 0;
    int lastPrime2 = 0;
    //에라토스테네스의 체 구현
    // scanf("%d %d", &M, &N); //M 시작수 N 끝수
    M = 2;
    N = 10000;
    for (int i = 2; i <= N; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i <= N; i++)
    {
        if (arr[i] == 0)
        {
        }
        else
        {
            for (int m = 2; m * i <= N; m++)
            {
                arr[i * m] = 0;
            }
        }
    }
    // arr에 들어있는 값이 0 일경우 소수가 아님
    // arr에 들어가 있는 값이 0이 아닐 경우 소수

    scanf("%d", &Ncase);
    for (int n = 0; n < Ncase; n++)
    {
        scanf("%d", &Ninput);
        while (1)
        {

            if (arr[index] != 0) //소수를 읽어오는 작업
            {
                //읽어온 수가 소수 일 경우
                tmp = Ninput - arr[index]; //읽어온 수 - 소수 했을 경우
                if (arr[tmp] != 0)         //그 값이 소수인가?
                {
                    lastPrime1 = arr[index];
                    lastPrime2 = arr[tmp];
                }
            }
            index = index + 1;
            if (arr[index] > (Ninput / 2))
            {
                break;
            }
       
        }
     index = 0;
            tmp = 0;
        printf("%d %d\n", lastPrime1, lastPrime2);
    }
}