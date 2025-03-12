#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    // n명이 모두 체육복을 가지고 있다고 가정
    vector<int> total(n + 1, 1);

    // lost에 있는 번호는 체육복이 없으니 -1해서 0으로 만듬
    for(int i = 0 ; i < lost.size() ; i++)
        total[lost[i]] -= 1;
    
    // reserve에 있는 번호는 여분이 있으니 +1해서 2로 만듬
    for(int i = 0 ; i < reserve.size() ; i++)
        total[reserve[i]] += 1;
    
    for(int i = 1 ; i <= n ; i++)
    {
        //혹시 체육복이 없는 친구라면
        if(total[i] == 0)
        {
            // (1) 앞 번호에 있는 친구가 2개인지 확인 
            if(total[i - 1] == 2)
            {
                total[i - 1] = 1;
                total[i] = 1;
            }
            // (2) 뒷 번호에 있는 친구가 2개인지 확인 
            else if(total[i + 1] == 2)
            {
                total[i + 1] = 1;
                total[i] = 1;
            }
        }
        if(total[i] >= 1)
            answer++;
    }
    
    return answer;
}