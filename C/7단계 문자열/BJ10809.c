#include <stdio.h>

int main()
{
    int al[24];
    char str[100];
    int tmp = 0;
    scanf("%s", str);
    for (int n = 0; n < 24; n++)
    {
        al[n] = -1;
    }
    for (int n = 0; n < 100; n++)
    {

      //  printf("%c \n", str[n]);
        if (str[n] == '\0')
        {   tmp = n;
            break;
        }
    }
    for (int n = 0 ; n < tmp ; n++)
    {
        
    }
    printf("%d \r\n", tmp);
    printf("%s", str);
}
