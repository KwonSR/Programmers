#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    
    for(auto str : rny_string)
    {
        if(str == 'm')
            answer += "rn";
        else
            answer += str;
    }
    return answer;
}