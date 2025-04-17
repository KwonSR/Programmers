#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    string tmp;
    vector<int> vec;        // 문자열에 있는 숫자를 담기위한 vector
    for(const auto& x : s)
    {
        if(x != ' ')        // 공백을 만날때까지 tmp에 붙이기
            tmp += x;
        else                // 공백을 만나면 stoi를 이용해 int로 저장
        {
            vec.push_back(stoi(tmp));
            tmp = "";
        }
    }
    if(!tmp.empty())                // tmp가 비어있지 않으면 vec에 추가
        vec.push_back(stoi(tmp));
    
    sort(vec.begin(), vec.end(), less<int>());      // 오름차순으로 정렬 후
    
    answer = to_string(vec.front()) + " " + to_string(vec.back());  // vector의 시작과 끝을 string으로 변환
    
    return answer;
}