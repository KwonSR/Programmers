#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    int idx = 0;    // my_str을 위한 index
    string tmp;     // 길이 n만큼 잘린 문자열이 담길 변수
    
    while(idx < my_str.size())
    {
        tmp += my_str[idx++];   //tmp에 my_str[idx]를 담음
        
        if(idx % n == 0)        // n으로 나눈 나머지가 0이면 
        {
            answer.push_back(tmp);  // answer에 추가
            tmp.clear();            // tmp 비우기
        }
        
        // idx가 my_str.size()와 같고 tmp가 비어있지 않다면
        // answer에 추가
        if(idx == my_str.size() && !tmp.empty())
            answer.push_back(tmp);
    }
    
    return answer;
}