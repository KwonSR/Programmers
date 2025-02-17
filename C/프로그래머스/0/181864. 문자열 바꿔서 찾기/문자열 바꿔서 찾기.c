#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int answer = 0;
    
    char *string = myString;
    for(int i = 0 ; i < strlen(string); i++)
    {
        if(string[i] == 'A')
            string[i] = 'B';
        else
            string[i] = 'A';
    }
    
    return strstr(string, pat) != NULL ? 1 : 0;
}