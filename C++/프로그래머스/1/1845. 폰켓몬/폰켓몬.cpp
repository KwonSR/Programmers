#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int tmp = -1;
    sort(nums.begin(), nums.end(), less<int>());
    
    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(tmp != nums[i])
        {
            answer++;
            tmp = nums[i];
        }
    }
    if(answer >= (nums.size() / 2))
        answer = nums.size() / 2;
    
    return answer;
}