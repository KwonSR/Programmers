#include <iostream>
#include<string>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = -1;
    
    // stack을 사용
    stack<char> stk;
    for(auto c : s)
    {
        // stack이 비었거나, stk.top과 c가 다르면 push
        if(stk.empty() || stk.top() != c)
            stk.push(c);
        else if(stk.top() == c)     // stk.top과 c가 같으면 pop
            stk.pop();
    }
    
    answer = stk.empty() ? 1 : 0;

    return answer;
}