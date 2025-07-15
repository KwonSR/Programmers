#include <string>
#include <vector>

using namespace std;

// 최대공약수
//  - 두 수가 공통으로 가지고 있는 약수 중 가장 큰 수
//  - 두 수를 나눌 수 있는 가장 큰 수

// 최소공배수
//  - 두 수의 공통 배수 중 가장 작은 수
//  - 두 수를 곱한 값을 최대공약수로 나눈 수
int getGCD(int num1, int num2)
{
    int gcd = 0;
    int range = num1 < num2 ? num1 : num2;
    
    for(int i = 1 ; i <= range ; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }
    
    return gcd;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int gcd = getGCD(n, m);
    
    answer.push_back(gcd);
    answer.push_back((n * m) / gcd);
    
    return answer;
}