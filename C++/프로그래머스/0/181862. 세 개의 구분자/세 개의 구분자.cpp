#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    
    string tmp;         // 임시 문자열
    for(const auto& s : myStr)
    {
        if('d' <= s && s <= 'z')    // a, b, c가 아니라면 tmp +
            tmp += s;
        
        // a, b, c를 만났는데 tmp가 비어있지 않다면 answer에 추가, tmp 비우기
        if(!tmp.empty() && (s == 'a' || s == 'b' || s =='c'))
        {
            answer.push_back(tmp);
            tmp = "";
        }
    }
    // for loop 종료 후 tmp가 비어있지 않다면 answer에 추가
    if(!tmp.empty())
        answer.push_back(tmp);
    
    // answer의 크기가 0 이라면 "EMPTY" 추가
    if(answer.size() == 0)
        answer.push_back("EMPTY");
    
    return answer;
}