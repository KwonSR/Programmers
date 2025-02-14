#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr1_len은 배열 arr1의 길이입니다.
// arr2_len은 배열 arr2의 길이입니다.
int solution(int arr1[], size_t arr1_len, int arr2[], size_t arr2_len) {
    int answer = 0;
    
    if(arr1_len != arr2_len)
        return arr1_len > arr2_len ? 1 : -1;
    
    int sum_a, sum_b;
    for(int i = 0 ; i < arr1_len ; i++)
        sum_a += arr1[i];
    for(int i = 0 ; i < arr2_len ; i++)
        sum_b += arr2[i];
    
    return sum_a > sum_b ? 1 : sum_a < sum_b ? -1 : 0;
}