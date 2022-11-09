#include <stdio.h>
#include <math.h>

int main ()
{
    int v =0;
int a =0 ;
int b =0 ;
double tmp =0;
    scanf("%d %d %d",&a,&b,&v);

    tmp =  ceil((double)(v-b)/(double)(a-b));

    printf("%d",(int)tmp);

}