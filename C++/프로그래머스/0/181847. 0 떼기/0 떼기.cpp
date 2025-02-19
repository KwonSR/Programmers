#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    
    int idx = 0;
    for(int i = 0 ; i < n_str.size() ; i++)
    {
        if(n_str[i] != '0')
        {
            idx = i;
            break;
        }
    }
    
    return string(n_str.begin() + idx, n_str.end());
    // (2)
    // n_str(string) -> convert int -> remove 0 -> convert int to string
    // string answer = to_string(stoi(n_str));
}