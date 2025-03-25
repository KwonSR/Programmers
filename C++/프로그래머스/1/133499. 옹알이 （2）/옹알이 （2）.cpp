#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> sound = {"aya", "ye", "woo", "ma"};
    
    for(int i = 0 ; i < babbling.size() ; i++)
    {
        string prev = "";
        for(int j = 0 ; j < babbling[i].size() ; j++)
        {
            // sound에 있는 글자가 있는지 확인해보고
            // 동일한 글자라면 해당 문자열을 지우고 prev에 업데이트
            // 문자열을 지운 경우 j = 0으로 맞춰 idx를 맞춰줌
            if(babbling[i].substr(0, 2) == "ye" && prev != "ye")
            {
                babbling[i].erase(0, 2);
                prev = "ye";
                j = 0;
            }
            else if(babbling[i].substr(0, 2) == "ma" && prev != "ma")
            {
                babbling[i].erase(0, 2);
                prev = "ma";
                j = 0;
            }
            else if(babbling[i].substr(0, 3) == "woo" && prev != "woo")
            {
                babbling[i].erase(0, 3);
                prev = "woo";
                j = 0;
            }
            else if(babbling[i].substr(0, 3) == "aya" && prev != "aya")
            {
                babbling[i].erase(0, 3);
                prev = "aya";
                j = 0;
            }
        }
        prev = "";
    }
    
    // 문자열이 비어있다면 발음할 수 있는 단어
    for(auto b : babbling)
        if(b.empty())
            answer++;
    
    return answer;
}