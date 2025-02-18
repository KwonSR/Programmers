#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    
    for(auto s : my_string)
        if(s >= 48 && s <= 57)
            answer.push_back(s-48);

    sort(answer.begin() , answer.end() , less<int>());
    
    return answer;
}