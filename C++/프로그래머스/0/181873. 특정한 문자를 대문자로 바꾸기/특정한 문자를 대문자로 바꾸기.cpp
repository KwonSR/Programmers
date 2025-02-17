#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    
    for(int i = 0 ; i < my_string.size() ; i++)
    {
        if(my_string[i] == alp[0])
            answer.push_back(my_string[i]-32);
        else
            answer.push_back(my_string[i]);
    }
    
    return answer;
}