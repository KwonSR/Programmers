#include <string>
#include <vector>

using namespace std;

// 팩토리얼 대신 누적곱으로 구현하는게 더 좋은 방법
// 수식을 m!으로 정리하는 것 보다 (n-m)!으로 정리하는게 더 보편적인 방식
// 생각보다 많은 것을 배워간 문제

int solution(int balls, int share) {
    long answer = 1;
    
    for(int i = 1 ; i <= share ; i++)
    {
        answer *= (balls - i + 1);
        answer /= i;
    }
    
    return answer;
}