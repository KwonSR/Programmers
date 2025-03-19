#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer = players;
    
    // map에 <이름, 등수>를 저장
    map<string, int> m;
    for(int i = 0 ; i < players.size() ; i++)
        m[players[i]] = i;
    
    string tmp;
    // for loop로 callings 확인
    for(int i = 0 ; i < callings.size() ; i++)
    {
        // callings[i]의 idx(등수)를 map에서 확인
        int idx = m[callings[i]];
        
        m[answer[idx - 1]] += 1;    // map에서 answer[idx - 1]의 등수를 +1
        m[callings[i]] -= 1;        // map에서 m[callings[i]]의 등수를 -1
        
        // answer에서 앞/뒤 등수를 바꿔줌
        tmp = answer[idx];
        answer[idx] = answer[idx - 1];
        answer[idx - 1] = tmp;        
    }
    return answer;
}