#include <string>
#include <vector>

using namespace std;

// 두 점 사이의 거리를 써야할지, 단순히 몇 칸을 이동할지
// 거리를 어떻게 구해야할지 고민이 많은 문제였음

string solution(vector<int> numbers, string hand) {
    string answer = "";

    // 숫자 패드를 vector<vector<int>> 형태로 담음
    // 왼 -> 오 index를 0, 1, 2    (가로로 3칸)
    // 위 -> 아래 index를 0, 1, 2, 3    (세로로 4칸)
    vector<vector<int>> keypad = {  {3, 1},                // 0
                                    {0, 0},{0, 1},{0, 2},  // 1, 2, 3
                                    {1, 0},{1, 1},{1, 2},  // 4, 5, 6
                                    {2, 0},{2, 1},{2, 2}   // 7, 8, 9
                                 };
    vector<int> l_pos = {3, 0}, r_pos = {3, 2}; // 처음 왼손, 오른손 위치

    for(int i = 0 ; i < numbers.size() ; i++)
    {
        // 눌러야 할 숫자 numbers[i]를 num에 저장
        int num = numbers[i];
        if(num == 1 || num == 4 || num == 7)        // 왼쪽 열 3개의 숫자라면
        {
            l_pos = keypad[num];                    // l_pos를 업데이트, keypad[num]이 누른 위치
            answer += "L";                          // answer에 L을 더함
        }
        else if(num == 3 || num == 6 || num == 9)   // 오른쪽 열 3개의 숫자라면
        {
            r_pos = keypad[num];                         // r_pos를 업데이트, keypad[num]이 누른 위치
            answer += "R";                          // answer에 R을 더함
        }
        else    // 그게 아니라면
        {
            // l_pos와 keypad[num]의 각 index의 차이, r_pos와 keypad[num]의 각 index의 차이를 구해
            // abs()함수를 이용하면 거리가 나옴
            int l_dist = abs(l_pos[0] - keypad[num][0]) + abs(l_pos[1] - keypad[num][1]);
            int r_dist = abs(r_pos[0] - keypad[num][0]) + abs(r_pos[1] - keypad[num][1]);

            // if - 거리가 같으면 변수 hand를 이용해 누를 손을 정함
            // else if - l_dist가 r_dist보다 크면 오른손으로 누름
            // else - l_dist가 r_dist보다 작으면 왼손으로 누름 
            if(l_dist == r_dist)
            {
                if(hand == "right")
                    r_pos = keypad[num];
                else
                    l_pos = keypad[num];
                answer += hand[0] - 32;
            }
            else if(l_dist > r_dist)
            {
                r_pos = keypad[num];
                answer += "R";
            }
            else
            {
                l_pos = keypad[num];
                answer += "L";
            }
        }
    }    
    return answer;
}