#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    
    for(auto d : db)
    {
        if(id_pw[0] == d[0])
        {
            if(id_pw[1] == d[1])
            {
                answer = "login";
                break;
            }
            else
                answer = "wrong pw";
        }
    }
    
    return answer;
}