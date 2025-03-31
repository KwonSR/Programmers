#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    
    vector<string> week = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};    // 요일 이름
    vector<int> months = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};      // 1 ~ 12월까지 일 수
    int sum = 0;
    
    // a월 전까지 총 몇일이 지났는지 일수를 더함
    for(int i = 0 ; i < (a - 1) ; i++)
        sum += months[i];
    
    // a월에서 총 몇일이 지났는지 추가로 더해줌 
    // -1을 하는 이유: 기준이 1일 이라서 (2일이라면 a월 1일에서 1일이 지남)
    sum += b - 1;
    
    answer = week[sum % 7];    
    
    return answer;
}