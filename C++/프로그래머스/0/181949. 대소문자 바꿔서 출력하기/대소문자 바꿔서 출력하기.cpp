#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(int i = 0 ; i < str.size() ; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = tolower(str[i]);
            // str[i] += 32;
        else
            str[i] = toupper(str[i]);
            // str[i] -= 32;
    }
    
    cout << str;
    
    return 0;
}