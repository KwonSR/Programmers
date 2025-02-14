#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    // A 65 - a 97
    for(auto str : my_string)
    {
        if(str >= 'A' && str <= 'Z')
            answer.push_back(str + 32);
        else
            answer.push_back(str - 32);
    }
    
    // (2)
    // for(auto& str : my_string)
    // {
    //     if(islower(str))
    //         answer.push_back(toupper(str));
    //     else 
    //         answer.push_back(tolower(str));
    // }
    
    return answer;
}