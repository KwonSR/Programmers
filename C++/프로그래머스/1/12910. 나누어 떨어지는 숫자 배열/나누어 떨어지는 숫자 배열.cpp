#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(int i = 0 ; i < arr.size() ; i++)
    {
        if(arr[i] % divisor == 0)
            answer.push_back(arr[i]);
    }
    
    sort(answer.begin(), answer.end(), less<int>());    
    
    if(answer.size() == 0)
        return {-1};
    else
        return answer;
}