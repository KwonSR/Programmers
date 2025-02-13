#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(auto s : my_string)
    {
        switch(s)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                continue;
            default:
                answer.push_back(s);
        }
    }
    return answer;
}