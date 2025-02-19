#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int v = 0;
    for(int i = 1 ; i <= 6 && i <= n ; i++)
    {
        if (6 % i == 0 && n % i == 0)
            v = i;
    }
    
    return n/v;
}