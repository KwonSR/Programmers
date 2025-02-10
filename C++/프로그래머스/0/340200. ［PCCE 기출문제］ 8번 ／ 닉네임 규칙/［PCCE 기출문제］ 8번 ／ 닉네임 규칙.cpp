#include <string>
#include <vector>

using namespace std;

string solution(string nickname) {
    string answer = "";
    for(int i=0; i<nickname.size(); i++){
        if(nickname[i] == 'l'){
            answer += "I";
        }
        else if(nickname[i] == 'w'){
            answer += "vv";
        }
        else if(nickname[i] == 'W'){
            answer += "VV";
        }
        else if(nickname[i] == 'O'){
            answer += "0";
        }
        else{
            answer += nickname[i];
        }
    }
    
    // 단순히 if문만 수정했는데
    while(answer.size() < 4){
        answer += "o";
    }
    //if 문을 유지한 상태로 같은 결과를 낼 수 있었다.
    //if(answer.size() < 3){
    //    answer.append(4-answer.length(),'o');
    //}

    
    if(answer.size() > 8){
        answer = answer.substr(0,8);
    }
    return answer;
}
