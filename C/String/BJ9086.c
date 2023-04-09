#include <stdio.h>
int test_case = 0;
char str[1001];
int n = 0;
int f = 0;

int main()
{
    scanf("%d", &test_case);
    for (int l = 0; l < test_case; l++)
    {
        for (int v = 0; v < 1001; v++)
        {
            str[v] = 'a';
        }
        scanf("%s", str);
        for (int v = 0; v < 1001; v++)
        {
            if (str[v] == 'a')
            {
                n = v - 2;
                break;
            }
        }
       // printf("%d \r\n", n);
        if (n == 0)
        {
            printf("%c%c\n", str[0], str[0]);
        }
        else
            printf("%c%c\n", str[0], str[n]);
    }
}