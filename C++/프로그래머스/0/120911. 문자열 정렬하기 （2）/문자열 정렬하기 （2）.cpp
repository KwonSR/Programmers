#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {

    for(auto &s : my_string)
        if( s <= 'Z' && s >= 'A')
            s += 32;
    
    sort(my_string.begin(), my_string.end(), less<char>());
    
    return my_string;
}