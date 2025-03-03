#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string num(s.begin() + 1, s.end());
    return s[0] == '-' ? stoi(num) * -1 : stoi(s);
}