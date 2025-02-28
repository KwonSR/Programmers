#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    int idx = 0;
    int num1 = 0;
    int num2 = 0;
    char oper;
    while(true)
    {
        num1 = num1 * 10 + my_string[idx] - '0';
        idx++;
        if(my_string[idx] == ' ')
            break;
    }
    while(my_string[idx] != '\0')
    {
        idx++;
        oper = my_string[idx];
        idx += 2;
        while(true){
            num2 = num2 * 10 + my_string[idx] - '0'; 
            idx++;
            if(my_string[idx] == ' ' || my_string[idx] == '\0')
                break;
        }
        if(oper == '+')
            answer = num1 + num2;
        if(oper == '-')
            answer = num1 - num2;
        num2 = 0;
        num1 = answer;
    }
    return answer;
}