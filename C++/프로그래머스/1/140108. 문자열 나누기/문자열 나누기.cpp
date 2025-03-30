#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    char letter = s[0];         // 비교를 시작할 string의 시작 문자
    int same = 0;               // 비교해서 같으면 same++;
    int diff = 0;               // 비교해서 다르면 diff++;

    for(int i = 0 ; i < s.size() ; i++)
    {
        // letter과 s[i]가 같으면 same++;
        // letter과 s[i]가 다르면 diff++;
        if(letter == s[i])
            same++;
        else
            diff++;

        // same과 diff를 비교한 후 같으면
        if(same == diff)
        {
            //  비교할 문자를 다음 문자로 세팅하고 answer++;
            letter = s[i + 1];
            answer++;
        }
        
        // 만약 비교를 했는데 same과 diff과 다르면서 loop의 i가 string s의 길이 - 1이면 
        // string의 끝까지 갔다는 뜻 ( 나눠지지 않는 문자열 ), 문자열이 1개 더 생겼으므로 1 증가
        if(same != diff && i == s.size() - 1)
            answer++;
    }
    return answer;
}