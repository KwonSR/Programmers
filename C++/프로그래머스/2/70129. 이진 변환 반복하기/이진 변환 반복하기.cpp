#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer = {0, 0};
    
    while(true)
    {
        int len = 0;            // 0 제거 후 남은 길이를 담을 변수
        if(s.size() == 1)       // s의 길이가 1이면 while 종료
            break;
        
        // s[i]가 1이면 남은 길이 ++, 0인경우 answer[1]을 증가해 지운 0의 개수 증가
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '1')
                len++;
            else
                answer[1]++;
        }
        
        // 새로운 이진수를 넣기 위해 기존 string을 비움
        s = "";

        // 10진수를 2진수로 변환하면 
        // 보통 s += (len % 2 == 0 ? "0" : "1") 이렇게 쓰는데 이러면 뒤집어짐
        // 근데 s = (len % 2 == 0 ? "0" : "1") + s 이렇게 쓰면 올바르게 붙음
        while(len > 0)
        {
            s = (len % 2 == 0 ? "0" : "1") + s;
            len /= 2;
        }
        
        answer[0]++;        // 회차 증가 (answer[0])
    }
    
    return answer;
}