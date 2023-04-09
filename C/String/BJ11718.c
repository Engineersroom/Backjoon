#include <stdio.h>

char str[100];

int outflag = 0;

int main()
{
    for (int k = 0; k < 100; k++)
    {
        for (int i = 0; i < 100; i++)
        {
            str[i] = NULL;
        }
        scanf("%[^\n]s", str);
        if ( (str[0] == '\n')||(str[0]=='\t') )
            printf("out");
        else
            printf("%s\r\n");
    }
    return 0;
}