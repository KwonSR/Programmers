#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    
    for(auto s : to_string(order))
        if(s == '3' || s == '6' || s == '9')
            answer++;
    
    return answer;
}