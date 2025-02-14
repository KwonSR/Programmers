#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {

    if(arr1.size() != arr2.size())
        return arr1.size() > arr2.size() ? 1 : -1;
    
    int sum_a = accumulate(arr1.begin() , arr1.end(), 0);
    int sum_b = accumulate(arr2.begin() , arr2.end(), 0);
    
    return sum_a > sum_b ? 1 : sum_a < sum_b ? -1 : 0;
}