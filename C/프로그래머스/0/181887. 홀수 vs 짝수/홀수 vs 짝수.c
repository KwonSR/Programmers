#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int sum_1 = 0, sum_2 = 0;
    for(int i = 0 ; i < num_list_len ; i++)
    {
        if(i%2 == 0)
            sum_1 += num_list[i];
        else
            sum_2 += num_list[i];
    }
    return sum_1 > sum_2 ? sum_1 : sum_2;
}