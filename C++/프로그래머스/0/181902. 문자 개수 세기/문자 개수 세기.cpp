#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    
    for(auto c : my_string)
    {
        if(c <= 'z' && c >= 'a')
            answer[(c-'a')+26]++;
        else
            answer[c-'A']++;
    }
    
    return answer;
}