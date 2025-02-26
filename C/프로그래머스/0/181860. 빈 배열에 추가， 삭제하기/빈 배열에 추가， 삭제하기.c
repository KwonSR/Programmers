#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// flag_len은 배열 flag의 길이입니다.
int* solution(int arr[], size_t arr_len, bool flag[], size_t flag_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = 0;
    for(int i = 0 ; i < flag_len ; i++)
    {
        if(flag[i] == true)
            len += arr[i] * 2;
    }
    int* answer = (int*)malloc(sizeof(int) * len);
    
    int idx = 0;
    for(int i = 0 ; i < flag_len ; i++)
    {
        if(flag[i] == true)
        {
            for(int j = 0 ; j < (2 * arr[i]); j++)
                answer[idx++] = arr[i];
        }
        else
        {
            idx -= arr[i];
            if(idx < 0)
                idx = 0;
        }
    }
    answer = realloc(answer, sizeof(int) * idx);
    
    return answer;
}