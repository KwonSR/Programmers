#include <string>
#include <vector>

using namespace std;
int count_one(int value){
    int oneCount = 0;
    
    while(value > 0){
        if((value & 1) == 1){
            oneCount++;
        }
        value >>= 1;
    }
    return oneCount;
}

int solution(int n) {
    int target_count = count_one(n);
    int nextNum = n + 1;
    
    while(count_one(nextNum) != target_count){
        nextNum++;
    }
    
    return nextNum;
}