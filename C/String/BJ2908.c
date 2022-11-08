#include <stdio.h>
#define s2n(X) (X - 48)

char arr[7];
int a = 0;
int b = 0;
int main()
{
    scanf("%[^\n]s", &arr);

    a = s2n(arr[2]) * 100 + s2n(arr[1]) * 10 + s2n(arr[0]);
    b = s2n(arr[6]) * 100 + s2n(arr[5]) * 10 + s2n(arr[4]);
    // printf("A : %d B : %d ",a,b);
    if (a > b)
        printf("%d", a);
    else
        printf("%d", b);
}