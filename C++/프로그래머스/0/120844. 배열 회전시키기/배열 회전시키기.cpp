#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    if(direction == "right")
        rotate(numbers.begin(), numbers.end() - 1, numbers.end());
    else
        rotate(numbers.begin(), numbers.begin() + 1, numbers.end());
    
    return numbers;
    
    
//     vector<int> answer;
    
//     if(direction == "right")
//     {
//         answer.push_back(numbers.back());
//         for(int i = 0 ; i < numbers.size() - 1 ; i++)
//             answer.push_back(numbers[i]);
//     }
//     else
//     {
//         for(int i = 1 ; i < numbers.size() ; i++)
//             answer.push_back(numbers[i]);
//         answer.push_back(numbers.front());
//     }

//     return answer;
}