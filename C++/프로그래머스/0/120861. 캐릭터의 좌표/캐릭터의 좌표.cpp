#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer = {0, 0};        // 처음 좌표를 answer에 0,0으로 지정

    int pos_x = (board[0] / 2);     // 이동 가능한 x좌표 범위
    int pos_y = (board[1] / 2);     // 이동 가능한 y좌표 범위
    
    // up   -> 원점에서 위 방향    -> + 방향, answer[1]이 양수 pos_y보다 작아야만 위쪽 이동 가능
    // down -> 원점에서 아래 방향  -> - 방향, answer[1]이 -pos_y보다 커야만 아래쪽 이동 가능
    // left -> 원점에서 왼쪽 방향  -> - 방향, answer[0]이 -pos_x보다 커야만 왼쪽 이동 가능
    // right -> 원점에서 오른쪽 방향 -> +방향, answer[0]이 pos_x보다 작아야만 오른쪽 이동 가능
    for(int i = 0 ; i < keyinput.size() ; i++)
    {
        if(keyinput[i] == "up" && answer[1] < pos_y)        
            answer[1] += 1;
        else if(keyinput[i] == "down" && answer[1] > -pos_y)
            answer[1] -= 1;
        else if(keyinput[i] == "left" && answer[0] > -pos_x)
            answer[0] -= 1;
        else if(keyinput[i] == "right" && answer[0] < pos_x)
            answer[0] += 1;
    }
    
    return answer;
}