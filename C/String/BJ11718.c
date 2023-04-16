#include <stdio.h>

char str[100];

int outflag = 0;

int main()
{

    while(fgets(str,sizeof(str),stdin)!=NULL){
        printf("%s",str);
    }
    return 0;
}