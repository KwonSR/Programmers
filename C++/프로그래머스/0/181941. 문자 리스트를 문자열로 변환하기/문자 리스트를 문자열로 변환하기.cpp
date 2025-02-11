#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    
    for(const auto c : arr)
        answer += c;
    
    return answer;
    // (1) accumulate() 특정 배열 혹은 container의 누적 합을 구할 때 사용
    // return accumulate(arr.begin(), arr.end(), string(""));
    
    // (2) reduce() => 컨테이너 c의 모든 원소 x에 적용하여 하나의 값으로 축약하는 연산
    // cbegin(), cend() => const_iterator 타입을 받기위해
    // return reduce(arr.cbegin(), arr.cend(), string{""});
}