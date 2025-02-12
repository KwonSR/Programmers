#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int num1, int num2) {
    return trunc((float(num1)/float(num2))*1000);
}