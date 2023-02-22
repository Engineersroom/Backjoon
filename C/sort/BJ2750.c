#include <stdio.h>

//수 정렬하기, 시간 복잡도 O(n^2)인 정렬 알고리즘으로 풀 수 있다.
// 삽입 정렬 , 거품 정렬 등이 있다.
// 버전 1
int main()
{
    int Ncase = 0;
    int arr[1001];
    int tarr[1001];
    int min = 1001;
    int addr = 0;
    scanf("%d", &Ncase);

    for (int n = 0; n < Ncase; n++)
    {
        scanf("%d", &arr[n]);
    }

    for (int n = 0; n < Ncase; n++)
    {
        for (int m = 0; m < Ncase; m++)
        {
            if (min > arr[m])
            {
                min = arr[m];
                addr = m;
            }
        }
        tarr[n] = arr[addr];
        arr[addr] = 1002;
        min = 1001;
    }
    for (int n = 0; n < Ncase; n++)
    {
        printf("%d\n", tarr[n]);
    }
}