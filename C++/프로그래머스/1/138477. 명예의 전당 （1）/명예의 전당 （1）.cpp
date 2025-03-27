#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    
    vector<int> hol;        // 명예의 전당
    for(int i = 0 ; i < score.size() ; i++)
    {
        // hol.size() < k 이면, hol에 데이터 추가 -> 오름차순 정렬 -> 최소값 answer에 추가
        if(hol.size() < k)  
        {
            hol.push_back(score[i]);
            sort(hol.begin(), hol.end(), less<int>());
            answer.push_back(hol[0]);
        }
        else
        {
            // score가 hol의 최소값보다 작으면 hol의 최소값을 answer에 추가 -> continue
            if(score[i] < hol[0])
            {
                answer.push_back(hol[0]);
                continue;
            }
            // 그게 아닌 경우는 hol에 값을 추가 -> 오름차순 정렬
            hol.push_back(score[i]);
            sort(hol.begin(), hol.end(), less<int>());

            // 제일 처음 값을 지우고, 제일 처음 값을 answer에 추가
            hol.erase(hol.begin(), hol.begin() + 1);
            answer.push_back(hol[0]);
        }
    }
    
    return answer;
}