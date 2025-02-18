#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = myString;
    for(auto& s : answer)
    {
        if(s <= 'l')
            s = 'l';
    }
    return answer;
}