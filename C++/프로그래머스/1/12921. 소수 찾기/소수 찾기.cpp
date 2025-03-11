#include <string>
#include <vector>

using namespace std;

// 에라토스테네의 체

int solution(int n) {
    int answer = 0;
    
    // index가 0 ~ n-1이기 때문에 n의 값을 포함시키려 vector의 크기가 n+1이 됨
    vector<bool> prime_number(n + 1, true);
    
    for(int i = 2 ; i * i <= n ; i++)
    {
        // false로 변경된 수라면 소수가 아님
        if(prime_number[i])
        {
            // 여기서부터 소수가 아닌 수는 false로 변경
            for(int j = i * i ; j <= n ; j += i)
                prime_number[j] = false;
        }
    }
    
    for(int i = 2 ; i < prime_number.size() ; i++)
        if(prime_number[i])
            answer++;
    
    return answer;
}