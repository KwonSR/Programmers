#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    
    sort(wallet.begin(), wallet.end(), less<int>());
    sort(bill.begin(), bill.end(), less<int>());
    
    int tmp = 0;
    while(bill[0] > wallet[0] || bill[1] > wallet[1])
    {
        bill[1] /= 2;
        answer++;
        
        if(bill[0] > bill[1])
        {
            tmp = bill[0];
            bill[0] = bill[1];
            bill[1] = tmp;
        }
    }
    
    return answer;
}