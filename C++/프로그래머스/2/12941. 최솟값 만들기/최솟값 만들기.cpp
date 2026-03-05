#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    long long answer = 0;
    
    sort(A.begin(), A.end(), less<int>());
    sort(B.begin(), B.end(), greater<int>());
    
    for(size_t i = 0 ; i < A.size() ; i++){
        answer += 1LL * A[i] * B[i];
    }

    return static_cast<int>(answer);
}