#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    map<char, int> m1;
    map<char, int> m2;
 
    // X와 Y에 있는 char number 갯수를 파악하기 위해 map에 저장
    for(char c : X)
        m1[c] += 1;
    for(char c : Y)
        m2[c] += 1;
    
    // for loop를 9 부터 시작하면 정렬할 필요가 없음
    for(int i = 9 ; i >= 0 ; i--)
    {
        // '0' + i를 하면 char의 값이 나옴
        char c = '0' + i;
        // m1과 m2의 값이 둘다 0이 아닐 경우 X,Y에 공통적으로 있는 숫자
        if(m1[c] != 0 && m2[c] != 0)
        {
            // m1[c]와 m2[c]의 값을 비교해 작은 수를 고른다 (그만큼 중복된거임)
            int cnt = m1[c] > m2[c] ? m2[c] : m1[c];
            // cnt 만큼 answer에 추가해준다.
            for(int i = 0 ; i < cnt ; i++)
                answer.push_back(c);
        }
    }
    
    // answer가 비어있다면 공통된 수가 없는 것
    if(answer.empty())
        answer = "-1";
    // answer의 시작이 0이라면 해당 숫자는 0
    else if(answer[0] == '0')
        answer = "0";
    
    return answer;
}