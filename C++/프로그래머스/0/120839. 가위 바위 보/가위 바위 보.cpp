#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    
    for(auto s : rsp)
    {
        if( s == '2')
            answer.push_back('0');
        else if(s=='0')
            answer.push_back('5');
        else
            answer.push_back('2');
    }    
    return answer;
}