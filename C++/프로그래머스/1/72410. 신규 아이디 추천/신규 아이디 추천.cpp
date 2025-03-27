#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    // new_id[i]가 A ~ Z 사이면 tolower -> 소문자로 변경
    // isalnum , -, _, .에 해당된다면 answer += new_id[i]
    for(int i = 0 ; i < new_id.size() ; i++)
    {
        if('A' <= new_id[i] && new_id[i] <= 'Z')
            new_id[i] = tolower(new_id[i]);
        if(isalnum(new_id[i]) || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
            answer += new_id[i];
    }
    // 마침표가 연속되는지 확인, 연속된다면 지우기
    for(int i = 0 ; i < answer.size() ; i++)
    {
        if(answer[i] == '.' && answer[i+1] == '.')
        {
            answer.erase(i + 1, 1);
            i--;
        }
    }
    
    // 시작이 '.'이면 지우기, 끝이 '.'이면 지우기
    if(answer[0] == '.')
        answer.erase(0, 1);
    if(answer.size() != 0 && answer[answer.size() - 1] == '.')
        answer.erase(answer.size() - 1, 1);
    
    // 비어있다면 'a' 추가
    if(answer.empty())
        answer += 'a';
    
    // 길이가 3보다 작으면 3만큼 마지막 문자를 추가
    if(answer.size() < 3)
        for(int i = answer.size() ; i < 3 ; i++)
            answer += answer[answer.size() - 1];
    
    // 길이가 15보다 크면 15로 맞추기
    // 자르고 나서 마지막에 '.'가 있는지 확인하기
    if(answer.size() > 15)
    {
        answer = answer.substr(0, 15);
        if(answer[answer.size() - 1] == '.')
            answer.erase(answer.size() - 1, 1);
    }
    
    return answer;
}