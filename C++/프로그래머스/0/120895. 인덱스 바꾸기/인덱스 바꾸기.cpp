#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = "";
    
    for(int i = 0 ; i < my_string.size() ; i++)
    {
        if(i == num1)
            answer.push_back(my_string[num2]);
        else if(i == num2)
            answer.push_back(my_string[num1]);
        else
            answer.push_back(my_string[i]);
    }
    
    
    return answer;
}