#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
        
    for(int i = 0 ; i < schedules.size() ; i++)
    {
        //  목표 시간 계산법
        //  (1) schedules[i] / 100
        //      -> 현재 시간을 구함
        //  (2) (shcedules[i] % 100 + 10) / 60
        //      -> 현재 분을 구하고 10분을 더함
        //      -> 60으로 나누는 이유는 60이 넘으면 1 더해줘야함
        //  (3) (1) + (2)를 더하면 시간이 나옴
        //  (4) (schedules[i] % 100 + 10) % 60
        //      -> 현재 분을 구하고 10분을 더함
        //      -> 10분 더해서 60이 넘어가면 시간이 바뀜, 나머지 값만 있으면 분 설정 가능
        int goal = ((schedules[i] / 100 + (schedules[i] % 100 + 10) / 60) * 100) + (schedules[i] % 100 + 10) % 60;
        int day = startday;     // 시작일 변경을 막기 위한 변수
        bool flag = true;      // 지각했는지 안했는지 확인하기 위한 변수 ( 지각하면 false로 변경해주기때문에 초기값은 true)
        for(int j = 0 ; j < timelogs[i].size() ; j++)
        {
            // 일주일은 7일, 문제에서 월요일은 1, 금요일은 5라고 제공
            // day를 7로 나누었을때 나머지가 1 ~ 5 일때만 확인
            if(1 <= (day % 7) && (day % 7) <= 5)
            {
                // 출근시간이 목표시간보다 크면 false로 변경하고 break
                if(timelogs[i][j] > goal)
                {
                    flag = false;
                    break;
                }
            }
            day++;
        }
        if(flag)
            answer++;
    }
    return answer;
}