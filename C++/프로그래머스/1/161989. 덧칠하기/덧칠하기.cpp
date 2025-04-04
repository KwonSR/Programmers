#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    
    int start_pos = 0;       // 마지막 페인트를 칠한 위치
    for(int i = 0 ; i < section.size() ; i++)
    {
        // 현재 section[i] 마지막으로 페인트를 칠한 위치보다 작으면 continue
        if(section[i] < start_pos)
            continue;

        // 페인트 칠을 해야할 새로운 위치
        start_pos = section[i] + m;
        answer++;
    }
    
    return answer;
}