#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    
    // 각 변의 길이를 M-1번, N-1번 자르면 1x1 크기가 됨
    // 어느 변이든 먼저 잘라버리면
    // 먼저 잘라버린 변의 길이만큼 조각이 나기때문에 해당 변의 길이를 곱해주면 됨
    
    int answer = (M - 1) + (M * (N - 1));
    return answer;
}