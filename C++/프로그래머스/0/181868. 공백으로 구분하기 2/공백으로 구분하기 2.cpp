#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    string tmp;     // 문자 담을 임시 변수
    for(int i = 0 ; i < my_string.size() ; i++)
    {
        // 공백이 아니라면 tmp 더함
        if(my_string[i] != ' ')
            tmp += my_string[i];
        
        // my_string[i]가 공백이고, tmp에 값이 있다면
        // answer에 tmp 추가, tmp 비우기
        if(my_string[i] == ' ' && !tmp.empty())
        {
            answer.push_back(tmp);
            tmp.clear();
        }
    }
    
    // for loop가 끝나고 tmp에 데이터가 있으면
    // answer에 tmp 추가
    if(!tmp.empty())
        answer.push_back(tmp);
    
    return answer;
}