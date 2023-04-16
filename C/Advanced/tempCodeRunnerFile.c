#include <stdio.h>

int Basket[100];
int tmpBasket[100];
int main()
{
    int N;
    int M;
    int I, J, K;

    scanf("%d", &N); // Max Basket;

    scanf("%d", &M); // Max Case;

    for (int i = 0; i < N; i++)
    {
        Basket[i] = i+1;
        // tmpBasket[i] = i;
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d %d", &I, &J, &K); // Begin, End , Middle
        I = I - 1;
        J = J - 1;
        K = K - 1;
        int a = 0;

        for (int tmp = 0; tmp < (J - I + 1); tmp++)
        {
            if ((K + tmp) <= J)
            {
                tmpBasket[tmp] = Basket[K + tmp];
                a = tmp;
            }
            else // if (K+tmp > J)
            {
                tmpBasket[tmp] = Basket[I + tmp - a - 1];
            }
        }
        for (int tmp = 0; tmp < (J - I + 1); tmp++)
        {
            Basket[I+tmp] = tmpBasket[tmp];
        }
        //Debug
        // for (int tmp = 0; tmp < N ; tmp++)
        // {
        //     printf("%d ",Basket[tmp]);

        // }
        // printf("\r\n");
        //Debug
    }
    
}