#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int size = n/k;
    int* answer = (int*)malloc(sizeof(int) * size);
    
    int idx = 0;
    for(int i = 1; i <= size ; i++)
        answer[idx++] = i * k;
    
    return answer;
}