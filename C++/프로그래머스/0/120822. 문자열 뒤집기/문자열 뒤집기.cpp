#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    int len = my_string.size()-1;
    for(int i = 0 ; i <= len ; i++)
        answer.push_back(my_string[len-i]);
    
    return answer;
}