#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    
    // bin1, bin2를 stoi를 이용해서 10진수로 변경
    int num1 = stoi(bin1, nullptr, 2);
    int num2 = stoi(bin2, nullptr, 2);
    
    // 두 수의 합
    int sum = num1 + num2;
    
    // 혹시 합이 0이라면 0
    if(sum == 0)
    {
        answer += "0";
        return answer;
    }
    
    while(sum > 0)
    {
        // answer += to_string(sum % 2) 로 하면
        // 이진수가 반대로 뒤집어짐
        answer = to_string(sum % 2) + answer;
        sum /= 2;
    }
    
    return answer;
}