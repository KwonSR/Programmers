#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    int num = 0;
    int idx = 0;
    char oper = '+';

    while(idx <= strlen(my_string))
    {
        if(my_string[idx] <= '9' && my_string[idx] >= '0')
        {
            num = num * 10 + my_string[idx] - '0';
            if(my_string[idx + 1] == ' ' || my_string[idx + 1 ] == '\0')
            {
                if(oper == '+')
                    answer += num;
                else if(oper == '-')
                    answer -= num;    
                num = 0;
            }
        }
        else if(my_string[idx] == '+' || my_string[idx] == '-')
            oper = my_string[idx];
        idx++;
    }
    
    return answer;
}