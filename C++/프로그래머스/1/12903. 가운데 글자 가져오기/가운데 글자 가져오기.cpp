#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int s_len = s.size();
    if(s_len % 2 == 0)
        answer = s.substr((s_len / 2) - 1, 2);
    else
        answer = s.substr((s_len / 2), 1);
    
    return answer;
}