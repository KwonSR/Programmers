#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 52);
    memset(answer, 0, sizeof(int) * 52);
    
    int idx = 0;
    for(int i = 0 ; i < strlen(my_string) ; i++)
    {
        if(my_string[i] <= 'Z' && my_string[i] >= 'A')
        {
            idx = my_string[i] - 'A';
            answer[idx]++;
        }
        else if(my_string[i] <= 'z' && my_string[i] >= 'a')
        {
            idx = 26 + my_string[i] - 'a';
            answer[idx]++;
        }
    }
    
    return answer;
}