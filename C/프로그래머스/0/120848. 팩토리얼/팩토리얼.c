#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
    int idx = 1;
    
    while(n >= answer)
    {
        idx++;
        answer *= idx;
    }
    
    return idx-1;
}