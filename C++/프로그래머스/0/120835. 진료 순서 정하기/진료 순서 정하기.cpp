#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    
    vector<int> sort_list = emergency;

    // 내림차순으로 정렬
    sort(sort_list.begin(), sort_list.end(), greater<int>());
    
    // 이중 포문으로 한 개씩 찾아서 answer에 순서 추가
    // loop는 0 부터 시작하기에 j + 1을 넣어줌
    for(int i = 0 ; i < emergency.size() ; i++)
    {
        for(int j = 0 ; j < sort_list.size() ; j++)
        {
            if(emergency[i] == sort_list[j])
            {
                answer.push_back(j + 1);
                break;
            }
        }
    }
    
    return answer;
}