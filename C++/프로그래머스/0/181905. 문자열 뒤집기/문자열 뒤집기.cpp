#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = my_string;
    
    int idx = e;
    for(int i = s ; i <= e ; i++)
        answer[i] = my_string[idx--];
    
    // reverse(my_string.begin() + s, my_string.begin() + e + 1);
    
    return answer;
}