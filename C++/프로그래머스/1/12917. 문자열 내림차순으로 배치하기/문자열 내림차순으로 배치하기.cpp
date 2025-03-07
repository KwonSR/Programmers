#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i = 0 ; i < s.size() - 1 ; i++)
    {
        char tmp;
        for(int j = 0 ; j < s.size() - 1 ; j++)
        {
            if(s[j] < s[j+1])
            {
                tmp = s[j+1];
                s[j+1] = s[j];
                s[j] = tmp;
            }
        }
    }
    answer = s;
    
    return answer;
}