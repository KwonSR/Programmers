#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = s;
    
    for(int i = 0 ; i < answer.size() ; i++)
    {
        // answer[i]에서 (n - 26)을 더함
        // 'A ~ Z' or 'a ~ z' 범위를 벗어나면 다시 더해서 범위를 맞춰줌
        if(answer[i] >= 'A' && answer[i] <= 'Z')
        {
            answer[i] += n - 26;
            if(answer[i] < 'A')
                answer[i] += 26;
        }
        else if(answer[i] >= 'a' && answer[i] <= 'z')
        {
            answer[i] += n - 26;
            if(answer[i] < 'a')
                answer[i] += 26;
        }
    }
    
    
    return answer;
}