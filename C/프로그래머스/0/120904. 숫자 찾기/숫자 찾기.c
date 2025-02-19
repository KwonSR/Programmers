#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int answer = 0;
    
    char n[7];
    sprintf(n, "%d", num);
    
    for(int i = 0 ; i < strlen(n) ; i++)
    {
        if(n[i] == k + '0')
            return i + 1;
    }
    return -1;
}