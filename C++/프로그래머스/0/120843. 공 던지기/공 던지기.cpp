#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int idx = (2 * (k - 1)) % numbers.size();
    
    answer = numbers[idx];
    
    return answer;
}