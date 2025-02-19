#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string tmp = to_string(age);
    
    for(int i = 0 ; i < tmp.size() ; i++)
        answer += (tmp[i]+49);
    
    return answer;
}