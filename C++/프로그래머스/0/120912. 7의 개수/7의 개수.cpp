#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(auto a : array)
    {
        string str = to_string(a);
        for(auto s : str)
            if(s == '7')
                answer++;
    }
    
    return answer;
}