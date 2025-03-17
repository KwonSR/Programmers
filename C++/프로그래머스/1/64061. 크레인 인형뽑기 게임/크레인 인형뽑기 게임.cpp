#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    // 뽑은 인형이 순서대로 들어갈 vector 선언
    vector<int> tmp;
    
    // for loop는 moves 기준으로
    for(int i = 0 ; i < moves.size() ; i++)
    {
        // moves의 값이 1 부터 5~30 이기때문에 vector의 index를 맞추려면 -1 해줘야한다.
        int idx = moves[i] - 1;
        
        // for loop 는 "행" 기준으로 확인해야 한다.
        // 정사각형 모양이기에 board.size()로 loop의 범위를 잡아도 무방하다.
        for(int j = 0 ; j < board.size() ; j++)
        {
            // 뽑은 인형이 1개 이상이고, tmp의 마지막과 현재 뽑은 인형이 같다면
            // 뽑은 인형을 제거하고, board[j][idx]의 값도 0으로 변경해준다 (뽑았기 때문)
            // 2개의 인형이 사라지므로 2를 증가시킨다. 
            if(tmp.size() >= 1 && tmp.back() == board[j][idx])
            {
                tmp.pop_back();
                board[j][idx] = 0;
                answer += 2;
                break;
            }
            // 그게 아니라면 board[j][idx]가 0인 곳은 인형이 없기에 처음으로 0이 아닌 곳을 만난 경우
            // tmp에 값을 넣어주고 board[j][idx] 값을 0으로 업데이트 해준다.
            else
            {
                if(board[j][idx] != 0)
                {
                    tmp.push_back(board[j][idx]);
                    board[j][idx] = 0;
                    break;
                }
            }
        }
    }
    
    return answer;
}