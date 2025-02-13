#include <string>
#include <vector>

using namespace std;

int solution(string n_str) {
    return stoi(n_str);

    // ASCII 코드에서 문자 '0'은 10진수 48, 문자 '9'는 57
    // n_str[i]에서 '0'의 값을 빼면 10진수 값이 나옴
    // (ex-  '8' - '0' = 56(10진수) - 48(10진수) => 8)
    // answer*10 <- 자리수를 하나씩 늘려가기 위해 
    
    // for(int i = 0; n_str[i]; i++)
    // {
    //     answer = answer*10 +n_str[i]-'0';   
    // }
}

    