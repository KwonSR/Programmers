#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 보트에 최대 2명을 탈 수 있음
// 오름차순으로 정렬 후 최소 최대를 비교하면서 확인

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    int left = 0;
    int right = people.size() - 1;
    
    // 오름차순으로 정렬
    sort(people.begin(), people.end(), less<int>());
    
    // left right가 교체되면 루프 종료
    while(left <= right)
    {
        // 최대와 최소를 같이 태울 수 있으면
        if(people[left] + people[right] <= limit)
            left++;     // left 증가시켜서 최소를 태움
        
        right--;        // 최대는 무조건 1명 태움
        answer++;       // 보트 개수 증가
    }
    
    return answer;
}