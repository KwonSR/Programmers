#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int len_1 = strlen(myString);
    int len_2 = strlen(pat);
    
    char *str = (char*)malloc(sizeof(char) * len_1);
    char *p = (char*)malloc(sizeof(char) * len_2);
    
    for(int i = 0 ; i < strlen(myString) ; i++)
    {
        if(myString[i] <= 'Z' && myString[i] >= 'A')
            str[i] = myString[i] + 32;
        else
            str[i] = myString[i];
    } str[len_1] = '\0';
    
    for(int i = 0 ; i < strlen(pat) ; i++)
    {
        if(pat[i] <= 'Z' && pat[i] >= 'A')
            p[i] = pat[i] + 32;
        else
            p[i] = pat[i];
    } p[len_2] = '\0';
    
    return strstr(str, p) != NULL ? 1 : 0;
    
    
    //(2)
    // return strcasestr(myString, pat) ? 1 : 0;
}


