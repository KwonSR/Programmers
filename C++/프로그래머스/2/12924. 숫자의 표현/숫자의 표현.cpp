#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int num = 0;            // 숫자의 합을 더할 변수
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = i ; j <= n ; j++)
        {
            num += j;           // num에  j를 더함
            if(num == n)        // num == n -> answer++, num 초기화, loop 중지
            {
                answer++;
                num = 0;
                break;
            }
            else if(num > n)    // num > n -> num 초기화, loop 중지
            {
                num = 0;
                break;
            }
        }
    }
    
    return answer;
}