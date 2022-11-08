// #include <stdio.h>

// char str[1000006];
// int cnt = 0;
// int space_flag = 0;
// int main()
// {
//     scanf("%[^\n]s", &str);
//     // fgets(str,1000000,stdin);

//     // printf("%s",str);

//     for (int n = 1; n < 1000006; n++)
//     {
//         if (str[n] == '\0')
//         {
//             // printf("%d \n", n);
//             break;
//         }
//         else if (str[n] == 32)
//         {
//             if (space_flag == 0)
//             {
//                 space_flag = 1;
//                 if (str[n + 1] == '\0')
//                     break;
//                 else
//                     cnt = cnt + 1;
//             }

//             // printf("%d : %c \n",n,str[n]);
//         }
//         else
//             space_flag = 0;
//     }
//     printf("%d", cnt + 1);
// }
#include <stdio.h>
#include <string.h>

char a[1000005];

int main(){
    int ans = 0;

    scanf("%[^\n]s",a);

    if(a[0]!=' ') ans++;

    for(int i=1;i<strlen(a);i++)
        if(a[i-1]==' ' && a[i]!=' ') ans++;

    printf("%d",ans);

    return 0;
}