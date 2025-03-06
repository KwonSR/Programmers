#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) {
    if(sqrt(n) - (long long)(sqrt(n)) == 0)
        return (sqrt(n) + 1) * (sqrt(n) + 1);
    else
        return -1;
}