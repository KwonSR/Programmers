#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    
    // 평균 점수기에 소수점이 나올 수 있으므로 vector<double>로 선언
    
    vector<double> avg;                         // 평균 점수를 담을 vector
    for(const auto& s : score)                  // 평균 계산
        avg.push_back((s[0] + s[1]) / 2.0);
    sort(avg.begin(), avg.end(), greater<double>());   // 내림차순으로 정렬

    // score 벡터를 돌면서 각 index의 평균 점수를 point에 저장
    // 그리고 find 함수를 이용해 avg 벡터에서 몇번째 index에 있는지 확인 
    // (0부터 시작하기에 +1 해줘야함)
    for(const auto& s : score)
    {
        double point = (s[0] + s[1]) / 2.0;
        int rank = find(avg.begin(), avg.end(), point) - avg.begin() + 1;
        answer.push_back(rank);
    }
    
    return answer;
}