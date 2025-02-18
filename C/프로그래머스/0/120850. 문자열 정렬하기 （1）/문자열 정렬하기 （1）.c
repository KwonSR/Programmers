#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int cnt = 0;
    for(int i = 0 ; i < strlen(my_string) ; i++)
        if(my_string[i] >= 48 && my_string[i] <= 57)
            cnt++;

    int *answer = (int*)malloc(sizeof(int) * cnt);

    int idx = 0;
    for(int i = 0 ; i < strlen(my_string) ; i++)
        if(my_string[i] >= 48 && my_string[i] <= 57)
            answer[idx++] = my_string[i]-48;

    int tmp = -1;
    for(int i = 0 ; i < cnt-1 ; i++)
    {
        for(int j = 0 ; j < cnt-1 ; j++)
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