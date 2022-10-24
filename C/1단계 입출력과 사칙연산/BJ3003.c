#include <stdio.h>

int main()
{
   int chase[6];
   int ref[6] = {1,1,2,2,2,8};

   scanf("%d",&chase[0]); 
   scanf("%d",&chase[1]); 
   scanf("%d",&chase[2]); 
   scanf("%d",&chase[3]); 
   scanf("%d",&chase[4]); 
   scanf("%d",&chase[5]); 

   for (int i = 0 ; i < 6 ; i ++)
   {
    if (chase[i]==ref[i])
    {
        chase[i] = 0;
    }
    else if (chase[i] > ref[i])
    {
        chase[i] = -1*(chase[i] - ref[i]);
    }
    else if (chase[i] < ref[i])
    {
        chase[i] = ref[i]-chase[i];
    }
   }

   for (int i = 0; i < 6 ; i++)
   {
    printf("%d ",chase[i]);
   }
   
}