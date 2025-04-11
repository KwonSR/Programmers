#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    
    string tmp = "";
    for(int i = 0 ; i < numbers.size() ; i++)
    {
        tmp += numbers[i];
        
        if(tmp == "zero")
        {
            answer = answer * 10 + 0;
            tmp = "";
        }
        else if(tmp == "one")
        {
            answer = answer * 10 + 1;
            tmp = "";
        }
        else if(tmp == "two")
        {
            answer = answer * 10 + 2;
            tmp = "";
        }
        else if(tmp == "three")
        {
            answer = answer * 10 + 3;
            tmp = "";
        }
        else if(tmp == "four")
        {
            answer = answer * 10 + 4;
            tmp = "";
        }
        else if(tmp == "five")
        {
            answer = answer * 10 + 5;
            tmp = "";
        }
        else if(tmp == "six")
        {
            answer = answer * 10 + 6;
            tmp = "";
        }
        else if(tmp == "seven")
        {
            answer = answer * 10 + 7;
            tmp = "";
        }
        else if(tmp == "eight")
        {
            answer = answer * 10 + 8;
            tmp = "";
        }
        else if(tmp == "nine")
        {
            answer = answer * 10 + 9;
            tmp = "";
        }
    }
    return answer;
}