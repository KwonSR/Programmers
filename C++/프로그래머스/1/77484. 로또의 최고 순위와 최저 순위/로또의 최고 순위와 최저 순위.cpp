#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int correct = 0;
    int zero = 0;
    
    for(int i = 0 ; i < lottos.size() ; i++)
    {
        if(lottos[i] == 0)
        {
            zero++;
            continue;
        }
        for(int j = 0 ; j < win_nums.size() ; j++)
        {
            if(lottos[i] == win_nums[j])
            {
                correct++;
                continue;
            }
        }
    }
    
    int high = (correct + zero) == 0 ? 1 : (correct + zero);
    int low = correct < 2 ? 1 : correct;
    
    answer.push_back(7 - high);
    answer.push_back(7 - low);    
    
    return answer;
}