#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    // min(), max() 함수 쓰면 쉽게 풀 수 있는 문제
    // 그냥 다르게 풀고 싶었음
    int max_y = -1, min_y = -1;     // 좌상단 좌표 (-1은 값이 안들어갔음을 표시)
    int max_x = -1, min_x = -1;     // 우상단 좌표
    
    for(int i = 0 ; i < wallpaper.size() ; i++)
    {
        // 만약 wallpaper[i]에 # 문자가 있다면 min_x, max_x 값을 구할 수 있음
        if(wallpaper[i].find('#') != string::npos)
        {
            // 값을 최초로 넣는 부분
            if(max_x == -1 && min_x == -1)
            {
                min_x = i;
                max_x = i + 1;
            }
            // 그 뒤부터는 다음줄에 #이 있는지 확인 후 max_x를 갱신해나감
            if(i >= max_x)
                max_x = i + 1;
        }
        
        // min_y, max_y를 구하는 loop
        for(int j = 0 ; j < wallpaper[i].size() ; j++)
        {
            // wallpaper[i][j]가 #라면 min_y, max_y를 구할 수 있음
            if(wallpaper[i][j] == '#')
            {
                // 값을 최초로 넣는 부분
                if(max_y == -1 && min_y == -1)
                {
                    min_y = j;
                    max_y = j + 1;
                }
                // index j 의 값이 max_y 이상이면 max_y 값을 갱신
                if(j >= max_y)
                    max_y = j + 1;
                // index j의 값이 min_y 보다 작으면 min_y 값을 갱신
                if(j < min_y)
                    min_y = j;
            }
        }
    }
    answer.push_back(min_x);
    answer.push_back(min_y);
    answer.push_back(max_x);
    answer.push_back(max_y);
    return answer;
}