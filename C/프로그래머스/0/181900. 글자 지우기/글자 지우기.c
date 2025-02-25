#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// indices_len은 배열 indices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int indices[], size_t indices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char *copy_string = my_string;
    
    int len = strlen(copy_string) - indices_len;
    char* answer = (char*)malloc(sizeof(char) * len);
    answer[len] = '\0';
    
    for(int i = 0 ; i < indices_len ; i++)
    {
        int idx = indices[i];
        copy_string[idx] = ' ';
    }
    
    int idx = 0;
    for(int i = 0 ; i < strlen(copy_string) ; i++)
        if(copy_string[i] != ' ')
            answer[idx++] = copy_string[i];
    
    return answer;
}