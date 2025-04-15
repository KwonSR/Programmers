#include <string>
#include <vector>

using namespace std;

// 알고있던 재귀함수 형태로 풀면 시간초과가 뜸
// vector에 넣으면서 한번에 계산

int solution(int n) {
    int answer = 0;
    
    vector<int> fibo;
    
    fibo.push_back(0);
    fibo.push_back(1);
    
    int val = 0;
    for(int i = 2 ; i <= n ; i++)
    {
        val = (fibo[i - 1] + fibo[i - 2]) % 1234567;
        fibo.push_back(val);
    }
    
    answer = fibo[n];
    
    return answer;
}