#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(auto s : myString)
    {
        if(s >= 'A' && s <= 'Z')
            answer.push_back(s+32);
        else
            answer.push_back(s);
    }
    
    return answer;
}