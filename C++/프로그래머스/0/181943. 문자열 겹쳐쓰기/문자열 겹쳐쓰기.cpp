#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    
    
    // string.replace(교체시작할 문자열 위치, 교체하려는 문자열 길이, 원하는 문자열);
    answer = my_string.replace(s, overwrite_string.size(), overwrite_string);

    return answer;
}