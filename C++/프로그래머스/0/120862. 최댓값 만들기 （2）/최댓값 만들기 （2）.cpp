#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    if(numbers.size() == 2)
        return numbers[0] * numbers[1];
    
    for(int i = 0 ; i < numbers.size() - 1 ; i++)
    {
        for(int j = i+1 ; j < numbers.size() ; j++)
        {
            if(numbers[i] * numbers[j] > answer)
                answer = numbers[i] * numbers[j];
        }
    }
    
    return answer;
}