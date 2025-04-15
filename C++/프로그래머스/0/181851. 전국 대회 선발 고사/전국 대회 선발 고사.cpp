#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    
    // attendance 중에 참석가능한 true를 찾아
    // vector v에  rank[i]를 넣어줌 ( 사이즈가 같아 true와 rank의 index가 같음)
    vector<int> v;
    for(int i = 0 ; i < attendance.size() ; i++)
        if(attendance[i] == true)
            v.push_back(rank[i]);
    
    sort(v.begin(), v.end(), less<int>());  // 오름차순으로 정렬
    
    int num1 = find(rank.begin(), rank.end(), v[0]) - rank.begin();     // 1순위
    int num2 = find(rank.begin(), rank.end(), v[1]) - rank.begin();     // 2순위
    int num3 = find(rank.begin(), rank.end(), v[2]) - rank.begin();     // 3순위
    
    answer = 10000*num1 + 100*num2 + num3;
    
    return answer;
}