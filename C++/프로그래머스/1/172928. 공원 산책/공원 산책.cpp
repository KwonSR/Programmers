#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int start_x, start_y;           // 시작위치를 저장하기 위한 변수
    int width = park[0].size();     // park의 가로길이 (vector park의 각 원소의 길이)
    int height = park.size();       // park의 세로길이 (vector park의 길이)
    
    // vector park를 순회하면서 start 위치를 찾기 
    for(int i = 0 ; i < park.size() ; i++)
    {
        for(int j = 0 ; j < park[i].size() ; j++)
        {
            if(park[i][j] == 'S')
            {
                start_x = i;
                start_y = j;
                break;
            }
        }
    }
    
    for(int i = 0 ; i < routes.size() ; i++)
    {
        char direction = routes[i][0];      // routes[i]에서 방향 찾기
        int num = routes[i][2] - '0';       // routes[i]에서 움직이는 거리 찾기
        bool flag = true;                   // true - 갈수있음 / false - 갈수없음

        // E와 W는 가로 움직임 -> start_y의 값을 변경
        // S와 N는 세로 움직임 -> start_x의 값을 변경
        if(direction == 'E' && start_y + num < width)
        {
            for(int j = 1 ; j <= num ; j++)
            {
                if(park[start_x][start_y + j] == 'X')
                    flag = false;
            }
            if(flag)
                start_y += num;
        }
        else if(direction == 'W' && start_y - num >= 0)
        {
            for(int j = 1 ; j <= num ; j++)
            {
                if(park[start_x][start_y - j] == 'X')
                    flag = false;
            }
            if(flag)
                start_y -= num;
        }
        else if(direction == 'S' && start_x + num < height)
        {
            for(int j = 1 ; j <= num ; j++)
            {
                if(park[start_x + j][start_y] == 'X')
                    flag = false;
            }
            if(flag)
                start_x += num;
        }
        else if(direction == 'N' && start_x - num >= 0)
        {
            for(int j = 1 ; j <= num ; j++)
            {
                if(park[start_x - j][start_y] == 'X')
                    flag = false;
            }
            if(flag)
                start_x -= num;
        }
    }
    answer.push_back(start_x);
    answer.push_back(start_y);  
    
    return answer;
}