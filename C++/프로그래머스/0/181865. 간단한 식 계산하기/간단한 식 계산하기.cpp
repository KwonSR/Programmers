#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    
    // 첫 공백을 찾기
    int idx = binomial.find(' ');
    
    int num1 = stoi(binomial.substr(0, idx));   // 문자열 처음 ~ idx
    int num2 = stoi(binomial.substr(idx + 3));  // idx + 3부터 끝
    char op = binomial[idx + 1];                // 연산자: idx + 1
    
    if(op == '+')
        answer = num1 + num2;
    else if(op == '-')
        answer = num1 - num2;
    else if(op == '*')
        answer = num1 * num2;
    else
        answer = num1 / num2;
    
    return answer;
}