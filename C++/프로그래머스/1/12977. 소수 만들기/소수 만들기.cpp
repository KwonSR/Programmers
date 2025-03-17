#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int sum = 0;
    
    // 모든 경우의 수를 따져보기
    for(int i = 0 ; i < nums.size() ; i++)
    {
        for(int j = i + 1 ; j < nums.size() ; j++)
        {
            for(int k = j + 1 ; k < nums.size() ; k++)
            {
                sum = nums[i] + nums[j] + nums[k];
                //약수의 갯수를 저장할 tmp
                int tmp = 0;
                for(int l = 1 ; l * l <= sum ; l++)
                {
                    // 나누어 떨어지지 않거나 약수의 갯수가 3개가 이상이면 continue;
                    if(sum % l || tmp >= 3)
                        continue;
                    // l의 제곱으로 나누어 떨어지면 약수의 개수는 1개 추가
                    // 아니라면 2개 추가
                    if(l * l == sum)
                        tmp += 1;
                    else
                        tmp += 2;
                }
                if(tmp == 2)
                    answer++;
            }
        }
    }

    return answer;
}