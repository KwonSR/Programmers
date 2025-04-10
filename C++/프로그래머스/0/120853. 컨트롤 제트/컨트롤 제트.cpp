#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;

    s += ' ';           // 마지막 수 처리하기위해 공백을 추가
    int num = 0;        // 숫자 담을 임시 변수
    int prev = 0;       // 이전 숫자
    bool flag = false;  // 음수인지 확인하기 위한 변수
    
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == '-')     // s[i]가 '-'면 flag true 후 continue
        {
            flag = true;
            continue;
        }

        if('0' <= s[i] && s[i] <= '9')  // s[i]가 0~9 사이 문자면 계속 담아줌
            num = (num * 10) + s[i] - '0';
        else if(s[i] == ' ')        // 공백을 만난 경우 answer에 값을 더해줌
        {
            int val = flag ? -num : num;    // flag에 따라 val은 양수 or 음수
            answer += val;
            prev = val;
            flag = false;
            num = 0;                // 숫자 담을 임시 변수 초기화
        }
        else                        // 'Z'를 만난 경우 이전 수를 빼줌
        {
            answer -= prev;
            prev = 0;
        }
    }
    return answer;
}