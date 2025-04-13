#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;         // 없음을 가정하고 2로 초기화
    
    map<char, int> m_s;     // spell을 담을 map
    map<char, int> m_d;     // dic을 담을 map
    
    // spell을 돌면서 어떤 문자가 있는지 저장
    for(auto s : spell)
        m_s[s[0]]++;

    for(int i = 0 ; i < dic.size() ; i++)
    {
        // spell의 길이와, dic[i]의 사이즈가 같은 경우만 확인
        if(spell.size() == dic[i].size())
        {
            // dic[i]가 포함한 문자열을 m_d에 저장한 후
            for(int j = 0 ; j < dic[i].size() ; j++)
                m_d[dic[i][j]]++;

            // m_s와 m_d를 비교해서 같으면
            // spell의 원소를 모두 사용한 단어임
            if(m_s == m_d)
            {
                answer = 1;
                break;
            }
            else        // 아닌경우 m_d를 비워 다음 단어를 확인
                m_d.clear();
        }
    }
    
    return answer;
}