#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    int tmp = 0;
    for(int i = 0 ; i < my_string.size() ; i++)
    {
        // if   -> 1과 9 사이라면 tmp에 더함
        //         다음 문자도 숫자일 수 있어서 tmp*10에 더함
        // else -> 문자라면 answer에 더하기, tmp = 0
        if('0' <= my_string[i] && my_string[i] <= '9')
        {
            tmp = (tmp * 10) + my_string[i] - '0';
        }
        else
        {
            answer += tmp;
            tmp = 0;
        }
    }
    // for loop 가 끝나고 tmp가 0 이 아니면 answer에 더해주기
    if(tmp != 0)
        answer += tmp;
    
    return answer;
}