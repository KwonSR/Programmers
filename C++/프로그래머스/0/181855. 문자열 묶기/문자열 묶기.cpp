#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    
    // strArr의 원소의 길이가 최대 30이기에
    // 배열의 index는 0부터 시작, 30 + 1 총 31개
    int cnt[31] = {0};
    // strArr을 돌면서 size의 인덱스 값을 증가 시킴
    for(const auto& s : strArr)
        cnt[s.size()]++;
    
    // 최대값 찾기
    for(int i = 0 ; i < 31 ; i++)
    {
        if(answer < cnt[i])
            answer = cnt[i];
    }
    
    return answer;
}