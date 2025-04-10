#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* myString) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(sizeof(char*) * 100001);
    
    //strtok()를 이용함
    char *tmp = strtok(myString, "x");

    int idx = 0;
    while(tmp != NULL)
    {
        int len = strlen(tmp);
        // 자른 문자열의 길이만큼 malloc 해주고
        answer[idx] = (char*)malloc(sizeof(char) * (len + 1));
        // answer에 tmp(자른 문자열)의 데이터를 복사해줌
        for(int i = 0 ; i < len ; i++)
            answer[idx][i] = tmp[i];
        // 마지막에 널문자 추가
        answer[idx][len] = '\0';
        idx++;
        // 다시 strtok를 이용해 x를 찾기
        tmp = strtok(NULL, "x");
    }
    answer[idx] = '\0';
    
    // 정렬 부분 (오름차순)
    for(int i = 0 ; i < idx-1 ; i++)
    {
        char *tmp;
        for(int j = 0 ; j < idx-1 ; j++)
        {
            if(strcmp(answer[j], answer[j+1]) > 0)
            {
                tmp = answer[j];
                answer[j] = answer[j+1];
                answer[j+1] = tmp;
            }
        }
    }    
    
    return answer;
}