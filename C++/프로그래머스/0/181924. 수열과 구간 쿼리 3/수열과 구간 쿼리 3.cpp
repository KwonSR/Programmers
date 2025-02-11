#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    
    int tmp;
    for(auto a : queries)
    {
        tmp = answer[a[0]];
        answer[a[0]] = answer[a[1]];
        answer[a[1]] = tmp;
        
        // swap(answer[a[0]], answer[a[1]]);
    }
    return answer;
}