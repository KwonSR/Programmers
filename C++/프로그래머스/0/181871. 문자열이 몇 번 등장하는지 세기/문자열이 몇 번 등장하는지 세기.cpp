#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    // myString에서 pat.size만큼 전까지만 확인함
    // substr로 문자열 잘라서 비교해보고 같으면 answer++
    for(int i = 0 ; i <= (myString.size() - pat.size()) ; i++)
    {
        if(myString.substr(i, pat.size()) == pat)
            answer++;
    }    
    return answer;
}