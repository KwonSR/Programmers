#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    
    string tmp;
    for(int i = 0 ; i < myString.size() ; i++)
    {
        if(myString[i] != 'x')
            tmp += myString[i];
        else if(myString[i] == 'x' && tmp.length() != 0)
        {
            answer.push_back(tmp);
            tmp.clear();
        }
    }
    if(tmp.length() != 0)
        answer.push_back(tmp);
    
    sort(answer.begin(), answer.end(), less<string>());
    
    return answer;
}