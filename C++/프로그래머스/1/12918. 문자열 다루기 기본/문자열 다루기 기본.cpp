#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    
    if(s.size() == 4 || s.size() == 6)
    {
        for(int i = 0 ; i < s.size() ; i++)
        {
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
                return false;
        }    
    }
    else
        return false;
    
    return true;
}