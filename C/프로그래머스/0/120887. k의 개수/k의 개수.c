#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    
    for(int n = i ; n <= j ; n++)
    {
        int num = n;
        while(1)
        {
            if(num % 10 == k)
                answer++;
            num /= 10;
            
            if(num == 0) break;           
        }
    }
    
    return answer;
}