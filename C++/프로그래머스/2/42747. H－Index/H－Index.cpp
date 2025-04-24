#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 처음에 딱 떠오른 방법으로 풀었는데
// 설명이 너무 난해한 문제?

int solution(vector<int> citations) {
    int answer = 0;
    
    // 오름차순으로 정렬
    // 특정 index 이후에 나오는 값들은, 해당 index의 값보다 최소한 크거나 같다
    // 이 특징을 이용
    sort(citations.begin(), citations.end(), less<int>());
    
    // for문의 idx는 citations를 탐색하기 위한 값일뿐 다른 의미가 없음
    // h_idx는 두가지를 만족해야함, 
    //  (1) h번 이상 인용되었는가
    //  (2) h편 이상인가
    int h_idx = 0;
    for(int i = 0 ; i < citations.size() ; i++)
    {
        h_idx = citations.size() - i;   // (2)번을 기준으로 h_idx를 잡은 후
        
        // (1)번을 확인
        // citations[i]의 값이 h_idx미만이라면 조건 만족 x
        // h_idx는 "h편 이상인가" 기준이기에 최대길이부터 1씩 작아짐
        // h_idx <= citations[i] 최소 같거나 citations[i]이 커지는 순간 만족
        if(h_idx <= citations[i])       
        {
            answer = h_idx;
            break;
        }
    }
    
    return answer;
}