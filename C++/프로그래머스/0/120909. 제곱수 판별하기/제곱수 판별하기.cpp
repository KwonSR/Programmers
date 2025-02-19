#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int n) {
    return sqrt(n) - (int)sqrt(n) > 0 ? 2 : 1;
}