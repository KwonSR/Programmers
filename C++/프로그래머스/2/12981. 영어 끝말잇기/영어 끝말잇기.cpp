#include <string>
#include <vector>
#include <map>

using namespace std;

// map을 이용해 단어가 나왔는지 true/false로 체크

vector<int> solution(int n, vector<string> words) {
    
    map<string, bool> word;

    // words[0]은 첫 시작단어기에 true로 시작
    word[words[0]] = true;
    // 첫 단어가 빠졌기에 words의 1번 index부터 체크
    for(int i = 1 ; i < words.size() ; i++)
    {
        string prev = words[i - 1];     // 이전 단어
        string cur = words[i];          // 현재 단어
        
        // cur의 값이 true면 이 전에 나온 단어
        // prev.back() -> string의 끝 문자
        // cur.front() -> string의 첫 문자
        if(word[cur] == true || prev.back() != cur.front())
            return { (i % n) + 1 , (i / n) + 1};
        
        word[cur] = true;
    }
    
    return {0, 0};    
}