#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(auto s : myString)
    {
        if(s == 'a')
            answer += toupper(s);
        else if(s >= 'B' && s <= 'Z')
            answer += s + 32;
        else
            answer += s;
    }
    
    return answer;
}