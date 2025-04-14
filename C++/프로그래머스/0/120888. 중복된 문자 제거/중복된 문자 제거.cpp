#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string my_string) {
    string answer = "";
    
    map<char, int> m;       // map에 알파벳별로 저장
    for(const auto& s : my_string)
    {
        if(m[s] == 1)   // 값이 1이라면 이전에 등장했음
            continue;
        
        m[s]++;         // 알파벳 값을 ++
        answer += s;    // answer에 추가
    }
        
    return answer;
}