#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    // (1)
    int answer = 0;
    if(number % n == 0 && number % m == 0)
        answer = 1;
    else
        answer = 0;
    return answer;
    
    // (2)
    // return number%n==0 && number%m == 0 ? 1:0;
}