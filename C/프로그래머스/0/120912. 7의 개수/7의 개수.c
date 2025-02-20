#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    
    char c[6];
    
    for(int i = 0 ; i < array_len ; i++)
    {
        sprintf(c, "%d", array[i]);
        for(int j = 0 ; j < strlen(c) ; j++)
            if(c[j] == '7')
                answer++;
    }
    
    return answer;
}