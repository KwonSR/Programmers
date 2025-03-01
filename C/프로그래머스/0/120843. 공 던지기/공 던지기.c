#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len, int k) {
    int answer = 0, idx = 0;
    for (int i = 0; i < k - 1; i++) {
        idx += 2;
        if (idx > numbers_len) idx = idx % numbers_len;
    }
    answer = numbers[idx];
    return answer;
}