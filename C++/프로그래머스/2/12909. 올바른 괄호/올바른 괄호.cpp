#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int open = 0;           // 열린괄호 개수
    int close = 0;          // 닫힌괄호 개수

    // s 가 닫힌괄호로 시작하거나, 끝이 열린괄호면 false
    if(s.front() == ')' || s.back() == '(')
        answer = false;
    else
    {
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '(')             // 열린괄호라면 open++
                open++;
            else                        // 닫힌 괄호라면 close++
                close++;

            if(open - close < 0)        // 혹시 open이 close보다 적으면 괄호가 ()) 이런 형태
            {
                answer = false;         // false 만들고 loop 종료
                break;
            }
        }
        if(open != close)               // 개수가 다른 경우 괄호가 안닫힘
            answer = false;
    }

    return answer;
}