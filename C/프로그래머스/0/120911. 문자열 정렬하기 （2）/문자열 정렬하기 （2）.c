#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * (strlen(my_string)));
    answer[strlen(my_string)] = '\0';
    
    for(int i = 0 ; i < strlen(my_string) ; i++)
    {
        if(my_string[i] <= 'Z' && my_string[i] >= 'A')
            answer[i] = my_string[i] + 32;
        else
            answer[i] = my_string[i];            
    }
    
    char tmp;
    for(int i = 0 ; i < strlen(answer)-1 ; i++)
    {
        for(int j = 0 ; j < strlen(answer)-1 ; j++)
        {
            if(answer[j] > answer[j+1])
            {
                tmp = answer[j];
                answer[j] = answer[j+1];
                answer[j+1] = tmp;
            }
        }
    }
    
    return answer;
}