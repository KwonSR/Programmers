#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int n = 1;
    while(arr.size() > n)
        n *= 2;
    answer.resize(n);
    return answer;
}