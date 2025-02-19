#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    
    int cnt = 0;
    for(int i = 0 ; i < len ; i++)
        if(my_string[i] == ' ')
            cnt++;
    
    char** answer = (char**)malloc(sizeof(char*) * (cnt + 1));
    
    int char_cnt = 0;
    int idx = 0;
    for(int i = 0 ; i <= len ; i++)
    {
        if(my_string[i] == ' ' || (i == len))
        {
            answer[idx] = (char*)malloc(sizeof(char) * (char_cnt + 1));
            answer[idx++][char_cnt] = '\0';
            char_cnt = 0;
        }
        else
            char_cnt++;
    }
    
    idx = 0;
    int pos = 0;
    for(int i = 0 ; i < (cnt+1) ; i++)
    {
        for(int j = pos ; j < len ; j++)
        {
            if(my_string[j] != ' ')
            {
                answer[i][idx++] = my_string[j];
                pos = j+1;
            }
            else
            {
                idx = 0;
                pos = j+1;
                break;
            }
        }
    }
    
    return answer;
}