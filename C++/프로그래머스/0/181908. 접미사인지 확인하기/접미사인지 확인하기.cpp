#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    
    // if   -> is_suffix 사이즈가 더 크면 answer = 0
    // else -> 그게아니라면 my_string 끝부터 suffix 사이즈만큼 확인해보기
    if(is_suffix.length() > my_string.length())
        answer = 0;
    else
    {
        if(my_string.substr(my_string.size() - is_suffix.size(), is_suffix.size()) == is_suffix)
            answer = 1;
    }
    return answer;
}