#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    int cnt=0;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
            if(i%j == 0)
                cnt++;
        if(cnt >= 3)
            answer++;
        cnt = 0;
    }
    
    return answer;
}