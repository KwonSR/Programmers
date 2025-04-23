#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    int s_len = s.length();     // 문자열의 길이 
    
    // 0 ~ 문자열의 길이 - 1 까지 회전할 수 있음
    for(int i = 0 ; i < s_len ; i++)
    {
        // i~끝 까지 자른 문자열과 0부터 i까지 자른 문자열을 더하면
        // i만큼 왼쪽으로 회전한 문자열이 됨
        string tmp = s.substr(i) + s.substr(0, i);  
        stack<char> stk;            
        bool isValid = true;        // 괄호가 유효한지 확인, 기준은 true
        
        for(const auto& c : tmp)
        {
            // 열린괄호라면 stk에 push
            if(c == '(' || c == '{' || c == '[')
                stk.push(c);
            else    // 열린괄호가 아닌데
            {
                if(stk.empty())     // stk이 비어있다면
                {
                    isValid = false;    // 유효하지 않은 문자열
                    break;              // loop 종료
                }
                
                // 소,중,대괄호의 조합이 맞으면 stk에서 pop
                if ((stk.top() == '(' && c == ')') ||
                    (stk.top() == '{' && c == '}') ||
                    (stk.top() == '[' && c == ']'))
                    stk.pop();
                else        // 조합이 안맞는 경우
                {
                    isValid = false;    // 유효하지 않은 문자열
                    break;              // loop 종료
                }
            }
        }
        // isValid가 true이고, stk이 비어있다면 answer증가
        if(isValid && stk.empty())
            answer++;
    }
    
    return answer;
}