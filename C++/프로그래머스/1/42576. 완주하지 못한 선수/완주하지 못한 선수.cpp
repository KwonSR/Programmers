#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    // 아무 생각없이 이중 for문으로 돌렸다가 효율성 테스트를 통과 못함.
    // 찾아보니 map을 쓸까 했지만, 이 문제에서는 unordered_map을 사용하는게 더 효율적
    
    // unordered_map
    // 해시 테이블 기반, 정렬되지 않음, 빠른 검색이 필요할 때 사용
    unordered_map<string, int> result;

    // string은 동적 할당 사용하는 자료형 -> 값을 복사하면 성능 저하
    // const string&을 사용하면 기존 string을 참조 -> 메모리 복사 방지 -> 성능 향상
    // const를 사용하면 읽기 전용으로 만듬, 값 변경 방지
    for(const string& p : participant)
        result[p]++;
    
    for(const string& c : completion)
        result[c]--;
    
    for(const auto& r : result)
        if(r.second > 0)
            answer = r.first;
    
    return answer;
}