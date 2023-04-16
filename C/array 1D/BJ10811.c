#include <stdio.h>

int basket[100];
int temp_basket[100];
int max_num;
int b_case;
int i, j;

int main()
{
    for (int a = 0; a < 100; a++)
    {
        basket[a] = a + 1;
        temp_basket[a] = a + 1;
    }

    // insert Maximum basket number
    scanf("%d", &max_num);
    // insert MAximum Case
    scanf("%d", &b_case);

    for (int h = 0; h < b_case; h++)
    {
        scanf("%d %d", &i, &j);
        i = i - 1; // Front
        j = j - 1; // End

        // temp_basket[i] = basket[j]; // 0
        // temp_basket[i+1] = basket[j-1]; // 1
        // ....
        // temp_basket[i+x] = basket[j-x]; // x (n-1)
        // if (i+x>j)
        //     break;
        // if 
        // case 1 : (5,1) (1,3)
        // 
        int f = (j - i);
        //original i,j is 1,3 
        //but new i,j is 0,2
        //anyway f = 2
        //printf("value of f %d \n",f);
        for (int k = 0; k <= f; k++)
        {
            //case 1. step 1
            //k = 0 
            //case 1. step 2
            //k = 1;
            //case 1. step 3
            //k = 2;
            temp_basket[i + k] = basket[j - k];
            //case 1. step 1
            //temp_baseket[0] = basket[2];
            //case 1. step 2ㅎ
            //temp_baseket[1] = basket[1];
            //case 1. step 3
            //temp_baseket[2] = basket[0]; 
            //printf("test Branch1 \n");

        }
        for (int k = 0; k < max_num; k++)
        {
            basket[k] = temp_basket[k];
        }
    }
    for (int c = 0; c < max_num; c++)
        printf("%d ", basket[c]);
}