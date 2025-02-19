#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) {
    return sqrt(n) - (int)sqrt(n) > 0 ? 2 : 1;
}