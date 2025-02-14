#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer(arr);
    
    if(arr.size() % 2 == 1)
    {
        for(int i = 0 ; i < answer.size() ; i+=2)
            answer[i] += n;
    }
    else
    {
        for(int i = 1 ; i < answer.size() ; i+=2)
            answer[i] += n;
    }
    
    return answer;
}