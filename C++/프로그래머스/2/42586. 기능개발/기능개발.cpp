#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;
    
    // 작업 소요시간 계산
    // 100 - progresses % speeds를 했을 때 나머지가 0이 아니라면 1일 더 걸림
    for(int i = 0 ; i < progresses.size() ; i++)
    {
        int day = (100 - progresses[i]) / speeds[i];
        if((100 - progresses[i]) % speeds[i] > 0)
            day++;
        
        days.push_back(day);
    }
    
    // 첫 작업일 기준으로 days를 확인했을때 current보다 작으면 배포할 수 있음
    // cnt++
    int current = days[0];
    int cnt = 1;
    for(int i = 1 ; i < days.size() ; i++)
    {
        if(current >= days[i])
            cnt++;
        else
        {
            answer.push_back(cnt);
            cnt = 1;
            current = days[i];
        }
    }
    answer.push_back(cnt);
    
    return answer;
}