#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(n > 0)
    {
        answer += (n / a) * b;
        n = n - (a * (n / a)) + (b * (n / a));   
        
        if(n < a)
            break;
    }
    
    return answer;
}