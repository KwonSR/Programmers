#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string tmp;
    
    for(int i = 0 ; i < ingredient.size() ; i++)
    {
        // vector에서 1개씩 tmp에 추가하기
        tmp += to_string(ingredient[i]);
        
        // size() >= 4 크고 substr 했을때 있는 경우
        if(tmp.size() >= 4 && tmp.substr(tmp.size() - 4, 4) == "1231")
        {
            // tmp 에서 1231만큼 빠진 문자열을 tmp에 업데이트
            tmp = tmp.substr(0, tmp.size() - 4);
            answer++;
        }
    }
    return answer;
}