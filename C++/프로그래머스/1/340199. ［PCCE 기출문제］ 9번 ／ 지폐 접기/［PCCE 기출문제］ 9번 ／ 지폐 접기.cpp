#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    
    // 오름차순 - 큰 값을 반으로 나누기 때문
    sort(wallet.begin(), wallet.end(), less<int>());
    sort(bill.begin(), bill.end(), less<int>());
    
    int tmp = 0;
    // 둘 중 하나라도 크면 루프는 계속 돌아감
    while(bill[0] > wallet[0] || bill[1] > wallet[1])
    {
        // 큰 값을 반으로 나눔
        bill[1] /= 2;
        answer++;
        
        // 나누고 나서 오름차순인지 값 확인을 해야함
        // sort 써도되는데 그냥 이렇게 함
        if(bill[0] > bill[1])
        {
            tmp = bill[0];
            bill[0] = bill[1];
            bill[1] = tmp;
        }
    }
    
    return answer;
}