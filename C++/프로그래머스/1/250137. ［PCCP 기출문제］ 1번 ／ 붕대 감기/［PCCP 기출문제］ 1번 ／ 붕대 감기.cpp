#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    
    int end_time = attacks[attacks.size() - 1][0];      // 공격이 끝나는 시간
    int idx = 0;                                        // 벡터 attacks를 돌기위한 idx
    int time = 0;                                       // 연속 성공 count 변수
    int max = health;                                   // 최대 체력
    
    // 0초부터 공격이 끝나는 시간(end_time)까지 for loop
    // i와 attacks[idx][0]이 같아지는 순간은 공격 받음
    // 그게 아닌 경우 체력 회복    
    for(int i = 0 ; i <= end_time ; i++)
    {
        // 공격을 당한 경우
        if(i == attacks[idx][0])
        {
            health -= attacks[idx++][1];        // 체력 감소 & 공격 성공했기에 attacks idx++해주기
            time = 0;                           // 연속 성공 시간 초기화
            if(health <= 0)                     // 체력이 0이하면 캐릭터는 사망 즉시 종료
                break;
        }
        else
        {
            health += bandage[1];               // 체력 회복
            time++;                             // 연속 성공시간 +1
            if(time == bandage[0])              // 연속 성공시간을 채웠다면
            {
                health += bandage[2];           // 추가 회복시켜주고
                time = 0;                       // 연속 성공시간 초기화 ( 다시 시작해야 함 )
            }
            if(health >= max)                   // 체력 회복은 최대 체력 이상으로 할 수 없음
            {
                health = max;
                continue;
            }
        }
    }
    answer = health <= 0 ? -1 : health;  
    
    return answer;
}