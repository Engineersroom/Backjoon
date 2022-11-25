// #include <stdio.h>

// int main ()
// {
//     int w = 14;
//     int h = 14;
//     int T = 0;
//     int k  = 0;
//     int n = 0;
//     int arr[14][14] = {0,};

    
//     for (int i = 0 ; i < 14 ; i ++)
//     {
//         arr[0][i] = i+1;
//     }

//     for (int H = 1; H < 14 ; H ++)
//     {   
//         for(int W = 0; W < 14 ; W ++)
//         {
//             int sum = 0;

//                 for (int tw = 0 ; tw <= W ; tw++)
//                 {
//                     if (tw==14)
//                     break;
//                     else
//                     sum = arr[H-1][tw] + sum;
//                 }

//             arr[H][W] = sum;  
//         }
//     }
    
//     scanf("%d",&T);
//     for (int i = 0; i < T ; i++)

//     {
//         scanf("%d %d",&k,&n);
//         printf("%d\n",arr[k][n-1]);
//     }
// }
#include <stdio.h>
 
int main(){

  int arr[15][15] = {0,};  // 아파트의 층은 14보다 작거나 같기때문에 각각 15크기의 2중배열을 선언하고 0으로 초기화.
  int test,h,w;

  for(int i=0; i<15; i++){
    arr[0][i] = i;  // 문제를 보면 0층의 i호에는 i명만큼 산다고해서 0층에는 i명으로 선언.
  }
  
  for(int i=1; i<15; i++){
    for(int j=1; j<15; j++){
      arr[i][j] = arr[i-1][j] + arr[i][j-1];
    }  // 문제에서 말한 공식대로 밑에층의 1호부터 해당호까지 사람들의 합을 arr[i][j]에 넣어준다.
  }

  scanf("%d",&test); 
  
  for(int i=0;i<test;i++){
    scanf("%d %d", &h, &w);  
    printf("%d\n", arr[h][w]);  
  }

	return 0; 
}