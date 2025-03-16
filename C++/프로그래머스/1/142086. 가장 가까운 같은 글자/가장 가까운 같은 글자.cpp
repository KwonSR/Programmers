#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    // 마지막으로 등장한 알파벳의 idx를 저장하기 위한 vector 생성
    // -1로 초기화
    vector<int> alp(26, -1);
    
    int idx;
    for(int i = 0 ; i < s.size() ; i++)
    {
        // s[i]에서 'a'를 뺀 값은 vector의 index가 된다
        idx = s[i] - 'a';
        
        // alp vector의 해당 index 값이 -1일 경우 처음 등장했기 때문에
        // for loop의 i 값으로 업데이트 및 answer에 -1을 push_back
        if(alp[idx] == -1)
        {
            alp[idx] = i;
            answer.push_back(-1);
        }
        // -1이 아니라면 등장한 index가 저장이 되어 있으므로
        // for loop의 등장한 index에서 alp vector에 저장된 idx를 빼주면 몇 칸 앞에 있는지 계산 가능
        // 그 후 alp vector의 값을 foor loop의 i 로 업데이트
        else
        {
            answer.push_back(i - alp[idx]);
            alp[idx] = i;
        }
    }
    return answer;
}