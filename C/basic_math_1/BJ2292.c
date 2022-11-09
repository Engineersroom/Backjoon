#include <stdio.h>
int stage = 1;
int target = 0;
int ans = 0;
int serch_flag = 0;
int stage_start_num = 0;
int stage_end_num = 1;
int before_stage_end_num = 1;
int main()
{
    scanf("%d", &target);
    // 1 이나오면 1
    // 2~7이나오면 2
    // 8~19가 나오면 3
    while (1)
    {
        if (target == 1)
        {
           ans = 1;
        }
        else
        {   
            stage_end_num = stage_end_num + (stage-1)*6;     

            if (target <= stage_end_num)
            {
                ans = stage;
                break;
            }

        }
        
        stage++;
        if (stage > 1000000000)
        break;
    }
    printf("%d", ans);
    return 0;
}