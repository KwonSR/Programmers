#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    for(auto num : num_list)
    {
        if(num_list.size() > 10)
            answer += num;
        else
        {
            if(answer == 0)
                answer = 1;
            answer *= num;
        }
    }
    return answer;
}