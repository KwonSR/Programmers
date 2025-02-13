#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;

    sort(array.begin(), array.end(), less<int>());
    int len = array.size();
    answer = array[len/2];    
    
    return answer;
}