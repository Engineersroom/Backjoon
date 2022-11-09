#include <stdio.h>
// Test log
int main()
{
    int al[24];       // 알파벳은 24개
    char str[100];    //단어의 길이는 100개를 넘지 않는다
    int tmp = 0;      //임시 변수

    printf("숫자를 입력하세요 \r\n");

    scanf("%s", str); //단어를 입력 받는다
    

    //배열을 -1로 초기화 한다 
    for (int n = 0; n < 24; n++)
    {
        al[n] = -1;
    }
    for (int n = 0; n < 100; n++)
    { //일단 배열의 끝까지 반복하는데 

        //  NULL이 나오면 종료한다
        if (str[n] == '\0')
        {
            printf("%d \n",n);
            tmp = n;
            break;
        }
    }
    for (int n = 0; n < tmp; n++)
    {
        tmp = 10;
    }
    printf("%d \r\n", tmp);
    printf("%s", str);
}
