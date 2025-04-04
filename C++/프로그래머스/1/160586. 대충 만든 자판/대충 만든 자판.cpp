#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    for(int i = 0 ; i < targets.size() ; i++)
    {
        // 0을 넣어두고 최소값을 찾을때마다 더해주는 방식으로 진행
        answer.push_back(0);
        for(int j = 0 ; j < targets[i].size() ; j++)
        {
            char letter = targets[i][j];        // 찾으려는 문자
            bool flag = false;                  // 찾았는지 확인하기 위한 값
            int pos = 101;                      // 찾은 position (최대길이가 100이기에 101로 초기화)

            for(int k = 0 ; k < keymap.size() ; k++)
            {
                for(int l = 0 ; l < keymap[k].size() ; l++)
                {
                    if(letter == keymap[k][l])      // 만약 찾았으면
                    {
                        // 현재 저장된 pos와 l + 1과 비교해서 작은 값을 넣어줌
                        // 찾았기에 flag = true
                        pos = pos > l + 1 ? l + 1 : pos;
                        flag = true;
                        break;
                    }
                }
            }

            // !flag = true일 경우 못찾았기에 answer에 들어간 0을 -1로 바꿔줌
            // 루프 종료
            if(!flag)
            {
                answer[i] = -1;
                break;
            }
            answer[i] += pos;
        }
    }
    return answer;
}