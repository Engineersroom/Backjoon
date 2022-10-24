#include <stdio.h>
int arr1[100][100];
int arr2[100][100];
int main()
{
    int size_x, size_y;
    int tmp = 0;
    scanf("%d %d", &size_x, &size_y);

    for (int i = 0; i < size_x; i++)
    {
        for (int j = 0; j < size_y; j++)
        {
            scanf("%d", &tmp);
            arr1[i][j] = tmp;
        }
    }
    printf("step 1");
    for (int i = 0; i < size_x; i++)
    {
        for (int j = 0; j < size_y; j++)
        {
            scanf("%d", &tmp);
            arr2[i][j] = tmp;
        }
    }
    printf("step 2");
    for (int i = 0; i < size_x; i++)
    {
        for (int j = 0; j < size_y; j++)
        {
            arr1[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("step 3");
    for (int i = 0; i < size_x; i++)
    {
        for (int j = 0; j < size_y; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("%n");
    }
}