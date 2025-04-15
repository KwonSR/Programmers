#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    // 0 과 5로 구성되어있는 수인지 확인하기 위한 flag (기본은 찾았다로 가정)
    bool flag = true;
    for(int i = l ; i <= r ; i++)
    {
        // int -> string 변환후
        string num = to_string(i);
        for(const auto& n : num)
            if(n != '0' && n != '5')    // 숫자가 0과 5가 아니라면
            {
                flag = false;           //flag = false
                break;                  // loop 종료, 
            }
        
        if(!flag)               
            flag = true;
        else                    
            answer.push_back(i);
    }
    
    if(answer.size() == 0)
        answer.push_back(-1);
    
    return answer;
}