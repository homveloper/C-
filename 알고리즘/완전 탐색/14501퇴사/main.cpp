#include <stdio.h>
#include <algorithm>

int time[1000] = {0};
int pay[1000] = {0};
int dp[1000] = {0};

int main(){

    int N;
    int complete_day;

    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        scanf("%d %d", &time[i], &pay[i]);
    }

    for(int i= N; i>0; i--){
        complete_day = i + time[i];

        // 1. 퇴사 일을 초과하는가?
        if (complete_day > N + 1){
            dp[i] = dp[i+1];
        // 2. 그렇지 않으면 오늘 상담의 금액과 다음날 금액을 비교
        }else{
            dp[i] = std::max(dp[i+1], dp[complete_day] + pay[i]);
        }
    }

    printf("%d\n", dp[1]);
  
    return 0;
}