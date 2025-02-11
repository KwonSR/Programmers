#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string tmp_answer1 = to_string(a) + to_string(b);
    string tmp_answer2 = to_string(b) + to_string(a);
    
    if(stoi(tmp_answer1) > stoi(tmp_answer2))
        answer = stoi(tmp_answer1);
    else
        answer = stoi(tmp_answer2); 
    
    
    return answer;
}