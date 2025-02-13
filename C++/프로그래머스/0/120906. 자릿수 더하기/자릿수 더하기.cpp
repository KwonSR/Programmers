#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    while(true)
    {
        if(n>0)
        {
            answer += (n%10);
            n /= 10;            
        }
        else 
            break;
    }
    return answer;
}