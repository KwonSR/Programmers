#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    
    for(const auto c : arr)
        answer += c;
    
    return answer;
}