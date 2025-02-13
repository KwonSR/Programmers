#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    
    int atk = 5;
    while(hp>0)
    {
        answer += hp/atk;
        hp = hp%atk;
        
        atk -= 2;
    }
    
    return answer;
}