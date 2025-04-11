#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string s) {
    string answer = "";
    
    // map으로 문자별 카운트를 해줌
    map<char, int> m;
    for(int i = 0 ; i < s.size() ; i++)
        m[s[i]]++;
    
    // 1이면 answer에 추가
    for(auto v : m)
        if(v.second == 1)
            answer += v.first;
    
    return answer;
}