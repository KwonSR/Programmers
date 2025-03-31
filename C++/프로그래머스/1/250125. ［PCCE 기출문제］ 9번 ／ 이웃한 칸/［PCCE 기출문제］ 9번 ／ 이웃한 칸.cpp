#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    
    // 문제에서 제공한 pseudocode (이해도 안하고 짬)
    vector<int> dh = {0, 1, -1, 0};
    vector<int> dw = {1, 0, 0, -1};
    int n = board.size();
    
    for(int i = 0 ; i < 4 ; i++)
    {
        int h_check = h + dh[i];
        int w_check = w + dw[i];
        if(0 <= h_check && h_check < n && 0 <= w_check && w_check < n)
        {
            if(board[h][w] == board[h_check][w_check])
                answer++;
        }
    }
    
    // 내 스타일은 if문으로 푸는 방식
    // string color = board[h][w];
    // if (h - 1 >= 0 && color == board[h - 1][w])
    //     answer++;
    // if (h + 1 <= board.size() - 1 && color == board[h + 1][w])
    //     answer++;
    // if (w - 1 >= 0 && color == board[h][w - 1])
    //     answer++;
    // if (w + 1 <= board[0].size() - 1 && color == board[h][w + 1])
    //     answer++;
    
    return answer;
}