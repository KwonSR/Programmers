#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    
    set<int> sum;
    for(int i = 0 ; i < numbers.size() - 1 ; i++)
    {
        for(int j = i + 1 ; j < numbers.size() ; j++)
            if(i != j)
                sum.insert(numbers[i] + numbers[j]);
    }
    
    vector<int> answer(sum.begin(), sum.end());
    
    return answer;
}