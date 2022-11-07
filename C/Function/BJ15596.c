#include <stdio.h>
int num[3000000];

long long sum(int *a, int n);
int main()
{
    int sizeNum = 10;
    
    for (int i = 0 ; i < sizeNum ; i ++)
    {
        num[i] = i;
    }
    printf("%d \n",sum(num,sizeNum));

}

long long sum(int *a, int n)
{
    long long result = 0;
    
    for (int i = 0 ; i < n ; i ++ )
    {
        result = result + *(a+i);
        //printf("%d \n",result);
    }
    return result;
}