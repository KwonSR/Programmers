#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    string str = "";
    while(n > 0)
    {
        str += to_string(n % 3);
        n /= 3;
    }
    
    int power = str.size() - 1;
    for(int i = 0 ; i < str.size() ; i++)
    {
        answer += (str[i] - '0') * pow(3, power);
        power--;
    }
    
    return answer;
}