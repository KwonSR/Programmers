#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    // 숫자 영단어
    vector<string> num = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string answer;  // int를 string으로 변경해서 문자열 저장
    string tmp;     // 숫자가 아닌 문자를 담을 변수
    
    for(int i = 0 ; i < s.size() ; i++)
    {
        // s[i]가 0 ~ 9 사이의 문자라면 answer에 더하기
        // 아니라면 tmp에 더하기
        if('0' <= s[i] && s[i] <= '9')
            answer += s[i];
        else
            tmp += s[i];
        
        // num 벡터에서 tmp를 찾았을 경우 해당 index를 string으로 변환해 answer에 더하기
        int idx = find(num.begin(), num.end(), tmp) - num.begin();
        if(idx != num.size())
        {
            answer += to_string(idx);
            tmp.clear();
        }
    }
    
    // string to int함수로 형변환 하기
    return stoi(answer);
}