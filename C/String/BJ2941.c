#include <stdio.h>
#define len 200
//앞문자 확인해서 뒷문자 제거하는거 실패

char arr[26];
char stringarr[len];
int cnt = 0;
int breakcnt = 0;
int main()
{
    scanf("%s", stringarr);
    for (int n = 0; n < len; n++)
    {
        if (stringarr[n] == '\0')
        {
            breakcnt = n;
            break;
        }
        else if (stringarr[n] == 'd')
        {
            if ( (stringarr[n + 1] == 'z') && (stringarr[n + 2] == '='))
            {
                // cnt = cnt + 1;
                stringarr[n + 1] = '1';
                stringarr[n + 2] = '1';
            }
            else if (stringarr[n + 1] == '-')
            {
                // cnt = cnt + 1;
                stringarr[n + 1] = '1';
            }
            else
            {
                // cnt = cnt + 1;
            }
        }
        else if (stringarr[n] == 'l')
        {
            if (stringarr[n + 1] == 'j')
            {
                // cnt = cnt + 1;
                stringarr[n + 1] = '1';
            }
            else
            {
                // cnt = cnt + 1;
            }
        }
        else if (stringarr[n] == 'n')
        {
            if (stringarr[n + 1] == 'j')
            {
                // cnt = cnt + 1;
                stringarr[n + 1] = '1';
            }
            else
            {
                // cnt = cnt + 1;
            }
        }
        else if ((stringarr[n] >= 97) && (stringarr[n] <= 122))
        {
            cnt = cnt + 1;
        }
        // printf("")
    }
    //printf("%d\n", cnt);
    cnt = 0;
    for (int n = 0; n < breakcnt; n++)
    {
        //printf("%c ", stringarr[n]);
        if ((stringarr[n] >= 97) && (stringarr[n] <= 122))
        {
            cnt = cnt + 1;
        }
    }
    printf("%d", cnt);
}