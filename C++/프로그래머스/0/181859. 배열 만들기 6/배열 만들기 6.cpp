#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    for(int i = 0 ; i < arr.size() ; i++)
    {
        // answer이 비었을 경우 arr[i] 추가
        if(answer.size() == 0)
        {
            answer.push_back(arr[i]);
            continue;
        }
        
        // answer이 비어있지 않으면 answer.back과 arr[i] 비교해서 
        // 같으면 pop_back, 다르면 push_back
        if(answer.back() == arr[i])
        {
            answer.pop_back();
            continue;
        }
        else
            answer.push_back(arr[i]);
    }
    
    // for loop 끝나고 answer이 비었으면 -1 추가
    if(answer.size() == 0)
        answer.push_back(-1);
    
    return answer;
}