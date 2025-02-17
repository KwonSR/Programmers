#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    for(auto &s : myString)
        s = tolower(s);
    for(auto &s : pat)
        s = tolower(s);
    
    return myString.find(pat) != string::npos ? 1 : 0;
}