#include <iostream>

using namespace std;

int main(void) {
    
    // (1) 일반적인 출력방법
    // cout << "!@#$%^&*(\\\'\"<>?:;";
    
    //Raw String 을 이용한 방법  R"문자열"
    cout << R"(!@#$%^&*(\'"<>?:;)";
    return 0;
}