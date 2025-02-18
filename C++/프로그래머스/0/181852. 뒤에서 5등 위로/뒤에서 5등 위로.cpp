#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    sort(num_list.begin(), num_list.end(), less<int>());
    
    for(int i = 5 ; i < num_list.size() ; i++)
        answer.push_back(num_list[i]);
    
    return answer;
    
    // return vector<int>(num_list.begin()+5, num_list.end());
}