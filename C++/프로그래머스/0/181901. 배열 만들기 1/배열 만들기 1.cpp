#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    
    int size = n/k;
    for(int i = 1 ; i <= size ; i++)
        answer.push_back(i*k);
    
    return answer;
}