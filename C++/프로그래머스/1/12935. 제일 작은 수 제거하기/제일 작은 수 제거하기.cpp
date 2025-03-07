#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    
    if(arr.size() == 1)
        return {-1};
    else
    {
        int min_val = arr[0];
        int min_idx = arr[0];
        for(int i = 0 ; i < answer.size() ; i++)
        {
            if(min_val > arr[i])
            {
                min_val = arr[i];
                min_idx = i;
            }
        }
        answer.erase(answer.begin() + min_idx);
    }
    return answer;
}