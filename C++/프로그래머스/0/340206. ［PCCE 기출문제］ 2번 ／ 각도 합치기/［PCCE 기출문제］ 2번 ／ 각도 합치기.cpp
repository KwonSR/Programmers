#include <iostream>

using namespace std;

int main(void) {
    int angle1;
    int angle2;
    cin >> angle1 >> angle2;
    
    int sum_angle = angle1 + angle2;
    
    // 각도의 합을 360도로 나눈 나머지를 구하면 풀리는 문제
    cout << sum_angle % 360 << endl; 
    
    return 0;
}
