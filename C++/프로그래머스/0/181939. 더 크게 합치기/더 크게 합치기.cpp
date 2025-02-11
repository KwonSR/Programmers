#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    //(1) 
    string string_ab = to_string(a) + to_string(b);
    string string_ba = to_string(b) + to_string(a);
    
    if(stoi(string_ab) > stoi(string_ba))
        answer = stoi(string_ab);
    else
        answer = stoi(string_ba);
    
    // answer = stoi(string_ab) > stoi(string_ba)? stoi(string_ab) : stoi(string_ba);
    
    return answer;
    // (2)
    // return max(stoi(to_string(a)+to_string(b)),stoi(to_string(b)+to_string(a)));
}