#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int first_2 = -1;
    int last_2 = -1;
    for(int i = 0 ; i < arr_len ; i++)
    {
        if(arr[i] == 2)
        {
            first_2 = i;
            break;
        }
    }
    for(int i = arr_len - 1 ; i >= 0 ; i--)
    {
        if(arr[i] == 2)
        {
            last_2 = i;
            break;
        }
    }
        
    int len = last_2 - first_2 + 1;
    int* answer = (int*)malloc(sizeof(int) * len);
    
    if(first_2 == -1)
        *answer = -1;
    else if(first_2 >= 0 && last_2 >= 0)
    {
        for(int i = first_2 ; i <= last_2 ; i++)
            answer[i - first_2] = arr[i];
    }
    
    return answer;
}