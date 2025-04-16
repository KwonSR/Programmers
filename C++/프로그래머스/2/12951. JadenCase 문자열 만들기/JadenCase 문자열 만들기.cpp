#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool isFirst = true;        // 첫번째가 알파벳인지 확인하기 위해서
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == ' ')     // s[i]가 공백일 경우 다음 만나는 문자는 first문자
        {
            isFirst = true;
            continue;
        }
        else            // 공백이 아닐경우
        {
            if(isFirst == true)     // 첫번째 문자라면
            {
                if('0' <= s[i] && s[i] <= '9')  // 숫자인지 확인 후
                {
                    isFirst = false;            // 알파벳이 처음이 아님
                    continue;
                }
                else                            // 알파벳인 경우
                {
                    s[i] = toupper(s[i]);       // 대문자로 변경
                    isFirst = false;            // 다음문자부터 변경 X
                }
            }
            else
                s[i] = tolower(s[i]);           // 처음이 아닌경우 다 소문자
        }
    }
    answer = s;    
    return answer;
}