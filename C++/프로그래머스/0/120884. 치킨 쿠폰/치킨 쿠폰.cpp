#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;

    // 10마리 이상이어야 시킬 수 있으니까
    while(chicken >= 10)
    {
        // answer에 chicken / 10을 저장 (시킬 수 있는 마리수)
        // chicken / 10 -> 주문할 수 있는 서비스 치킨 수 = 쿠폰의 수
        // chicken % 10 -> 남은 쿠폰의 수
        answer += chicken / 10;
        chicken = (chicken / 10) + (chicken % 10);
    }
    return answer;
}