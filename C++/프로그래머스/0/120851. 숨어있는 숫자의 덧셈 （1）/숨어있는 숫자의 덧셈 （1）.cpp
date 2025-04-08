#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    // my_string을 돌면서 '1' ~ '9' 사이라면 
    // answer에 my_string[i]에 '0'을 뺀 값을 더해준다.
    for(int i = 0 ; i < my_string.size() ; i++)
    {
        if('1' <= my_string[i] && my_string[i] <= '9')
            answer += my_string[i] - '0';
    }
    
    return answer;
}