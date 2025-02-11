#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = n;
    
    for(const auto str : control)
    {
        if(str == 'w')
            answer += 1;
        else if(str == 's')
            answer -= 1;
        else if(str == 'd')
            answer += 10;
        else
            answer -= 10;
    }
    return answer;
}