#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    // (1)    
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
    
    // (2)
    // for(auto s : my_string)
    // {
    //     if(s!='a' && s!='e' && s!='i' && s!='o' && s!='u')
    //         answer += s;
    // }
    return answer;
}