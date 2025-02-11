#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = 0;
    
    for(int i = 0 ; i < code.size() ; i++)
    {
        if(mode == 0)
        {
            if(code[i] != '1' && i%2==0)
                answer += code[i];
            else if(code[i] == '1')
                mode = !mode;
        }
        else
        {
            if(code[i] != '1' && i%2==1)
                answer += code[i];
            else if(code[i] == '1')
                mode = !mode;
        }    
    }
    return answer.size() > 0 ? answer : "EMPTY";
}