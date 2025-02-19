#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    
    string n = to_string(num);
    for(int i = 0 ; i < n.size() ; i++)
    {
        if(n[i] == k + '0')
            return i+1;
    }
    
    return -1;
    
    // int idx = to_string(num).find(k + '0') + 1;
    // return idx ? idx : -1;
}