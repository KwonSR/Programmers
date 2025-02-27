#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    vector<int> tmp;
    for(int i = 0 ; i < arr.size() ; i++)
        if(arr[i] == 2)
            tmp.push_back(i);
    
    if(tmp.size() == 0)
        return {-1};
    else if(tmp.size() == 1)
        return {2};
    else
        return vector<int>(arr.begin() + tmp[0], arr.begin() + tmp[tmp.size() - 1] + 1);
}