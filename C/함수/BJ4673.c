#include <stdio.h>
int num[3000000];

void SelfNum(int asdf);
int main()
{
    int inputNum = 10000;
    SelfNum(inputNum);
}

void SelfNum(int asdf)
{
    int num[asdf];
    int k = 0;
    for (int i = 0; i < asdf; i++)
    {
        num[i] = i;
    }
    for (int i = 0; i < asdf; i++)
    {
        if ((i / 10) == 0) //한자리
        {
            k = i + i;
        }
        else if ((i / 100) == 0) //두자리
        {
            k = i + i % 10 + i / 10;
        }
        else if ((i / 1000) == 0) //세자리
        {
            k = i + i / 100 + (i % 100) / 10 + i % 10;
        }
        else if ((i / 10000) == 0) // 네자리
        {
            k = i + i / 1000 + (i % 1000) / 100 + (i % 100) / 10 + i % 10;
        }
        if (k > asdf)
        {
        }
        else if (k <= asdf)
        {
            num[k] = 0;
        }
    }
    for (int i = 0; i < asdf; i++)
    {
        if (num[i] == 0)
        {
        
        }
        else
        {
            printf("%d \n",i);
        }
    }
}