#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0;
    
    for(const auto str : control)
    {
        if(str == 'w')
            n += 1;
        else if(str == 's')
            n -= 1;
        else if(str == 'd')
            n += 10;
        else
            n -= 10;
    }
    return n;
}