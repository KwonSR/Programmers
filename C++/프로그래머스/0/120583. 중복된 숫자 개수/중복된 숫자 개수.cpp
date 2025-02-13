#include <string>
#include <vector>
// #include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    //(1)
    for(auto a : array)
    {
        if(a == n)
            answer++;
    }
    
    // (2) count 함수 이용
    // answer = count(array.begin(),array.end(),n);
    
    return answer;
}