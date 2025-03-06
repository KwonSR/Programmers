#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i = 1 ; i <= number ; i++)
    {
        int n = 0;
        for(int j = 1 ; j <= sqrt(i) ; j++)
        {
            if(i % j == 0)
                n += 2;
            
            if(j * j == i)
                n -= 1;
        }
        
        if(n > limit)
            n = power;
        
        answer += n;
    }
    
    return answer;
}