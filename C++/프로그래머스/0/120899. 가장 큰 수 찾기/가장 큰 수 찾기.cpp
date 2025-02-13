#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    
    int MAX = 0;
    int idx = 0;
    for(int i = 0 ; i < array.size() ; i++)
    {
        if(MAX == 0 && idx == 0)
        {
            MAX = array[i];
            idx = i;       
        }
        else
        {
            if(array[i] > MAX)
            {
                MAX = array[i];
                idx = i;
            }
        }
    }
    answer.push_back(MAX);
    answer.push_back(idx);  
    
    return answer;
}