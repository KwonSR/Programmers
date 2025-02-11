#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    int tmp_value = 0;
    for(auto q : queries)
    {
        for(int i = q[0] ; i <= q[1] ; i++)
        {
            if(arr[i] > q[2])
            {
                if(tmp_value == 0)
                    tmp_value = arr[i];
                else
                {
                    if(tmp_value > arr[i])
                        tmp_value = arr[i];
                }
            }
        }
        
        if(tmp_value == 0)
            answer.push_back(-1);
        else
        {
            answer.push_back(tmp_value);
            tmp_value = 0;
        }
    }
    return answer;
}