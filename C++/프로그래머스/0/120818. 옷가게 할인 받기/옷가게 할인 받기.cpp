#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    if (price >= 500000) answer = price * 0.8;
    else if (price >= 300000) answer = price * 0.9;
    else if (price >= 100000) answer = price * 0.95;
    else answer = price;
    return answer;
    // return price/10 >= 50000 ? (price*0.8) : price/10 >= 30000 ? (price*0.9) : (price*0.95);
}