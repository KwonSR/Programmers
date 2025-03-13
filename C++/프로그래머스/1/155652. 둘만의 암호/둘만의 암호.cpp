#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    // s의 0부터 size()까지 loop 시작
    for(int i = 0 ; i < s.size() ; i++)
    {
        // 건너뛸 만큼 loop 시작
        for(int j = 0 ; j < index ; j++)
        {
            // 우선 증가 시킨 후 'z'를 넘어가는지 확인
            // 넘어간다면 26(알파벳의 수)를 빼주면 'a'로 넘어옴
            s[i]++;
            if(s[i] > 'z')
                s[i] -= 26;

            // 1이 증가된 s[i]를 skip 문자열에 있는지 확인
            // skip 문자열에 포함되어 있다면 바로 1 증가시킴 (z를 넘어가는지 체크)
            while(skip.find(s[i]) != string::npos)
            {
                s[i]++;
                if(s[i] > 'z')
                    s[i] -= 26;
            }
        }
        answer += s[i];
    }
    
    return answer;
}