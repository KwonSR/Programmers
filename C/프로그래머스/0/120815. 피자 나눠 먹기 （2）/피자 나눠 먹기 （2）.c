#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    int v = 0;
    for(int i = 1 ; i <= 6 && i <= n ; i++)
    {
        if (6 % i == 0 && n % i == 0)
            v = i;
    }
    
    return ((n*6)/v)/6;
}