#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    int end = t.size() - p.size();
    for(int i = 0 ; i <= end ; i++)
    {
        // p의 길이가 1 <= p <= 18 
        // stoi 쓰면 에러뜸 stoll 써야함
        if(stoll(p) >= stoll(t.substr(i, p.size())))
            answer++;
    }
    
    return answer;
}