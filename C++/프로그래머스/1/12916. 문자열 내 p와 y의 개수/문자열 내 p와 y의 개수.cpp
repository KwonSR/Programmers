#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p_cnt = 0;
    int y_cnt = 0;
    for(auto c : s)
    {
        if(c == 'p' || c == 'P')
            p_cnt++;
        else if(c == 'y' || c == 'Y')
            y_cnt++;
    }
    
    if(p_cnt == y_cnt)
        return true;
    else if(p_cnt == 0 && y_cnt == 0)
        return true;
    else
        return false;
}