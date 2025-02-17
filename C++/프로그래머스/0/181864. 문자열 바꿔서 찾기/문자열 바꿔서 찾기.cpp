#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for(auto &s : myString)
    {
        if(s == 'A')
            s = 'B';
        else
            s = 'A';
    }
    
    return myString.find(pat) != string::npos ? 1 : 0;
}