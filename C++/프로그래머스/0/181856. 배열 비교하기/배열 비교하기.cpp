#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    
    int sum_a = accumulate(arr1.begin() , arr1.end(), 0);
    int sum_b = accumulate(arr2.begin() , arr2.end(), 0);
    
    if(arr1.size() == arr2.size())
    {
        if(sum_a < sum_b)
            return -1;
        else if(sum_a > sum_b)
            return 1;
        else
            return 0;
    }
    else
    {
        if(arr1.size() > arr2.size())// && sum_a > sum_b)
            return 1;
        else if(arr1.size() < arr2.size())// && sum_a < sum_b)
            return -1;
    }
    
}