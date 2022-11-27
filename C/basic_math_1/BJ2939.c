#include <stdio.h>

int main()
{
    int five = 0;
    int three = 0;
    int ea = -1;
    int N = 0;
    int temp =0;
    int flag =0;

    scanf("%d",&N);
    //N=18;
    for(int THREE = 0; (3*THREE)<= N; THREE++)
    {
        if (flag == 1)
        {
            break;
        }
       for (int FIVE = 0 ; (5*FIVE)<= N ; FIVE++) 
        {

            temp = (5*FIVE)+(3*THREE);
            if (N == temp)
            {
                ea = (FIVE+THREE);
                flag = 1;
                break;
            }

        }
        
    }
    printf("%d",ea);
}