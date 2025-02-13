#include <string>
#include <vector>
// #include <algorithm>

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

    // (2) (3) 처럼 max_element를 이용해 문제를 풀 수 있음
    // (2)
    // auto a = max_element(array.cbegin(), array.cend());
    // return {*a, (int)(a - array.cbegin())};
    
    // (3)
    // vector<int> answer;
    // auto t = max_element(array.begin(), array.end());
    // answer.push_back(*t);
    // answer.push_back(distance(array.begin(),t));
    // return answer;
}