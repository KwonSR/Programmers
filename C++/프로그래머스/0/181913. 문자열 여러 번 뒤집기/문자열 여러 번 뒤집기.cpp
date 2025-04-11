#include <string>
#include <vector>

using namespace std;

// 아래의 풀이보다 reverse 함수를 쓰는게 더 간편한 방법

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    
    char tmp;       // 자리바꾸면서 임시로 담을 변수
    for(int i = 0 ; i < queries.size() ; i++)
    {
        int idx1 = queries[i][0];   // queries [s, e]형태 원소의 s 값
        int idx2 = queries[i][1];   // queries [s, e]형태 원소의 e 값

        // 이 for loop는 자리를 바꿔야하는 횟수만큼 돌아감
        // 그래서 0부터 시작, j의 범위가 (idx2 - idx1 + 1) / 2
        // ex) 0, 7 -> 8개의 원소 -> 자리 4번 교체 -> (7 - 0 + 1) / 2 = 4
        // ex) 2, 3 -> 2개의 원소 -> 자리 1번 교체 -> (3 - 2 + 1) / 2 = 1
        for(int j = 0 ; j < (idx2 - idx1 + 1) / 2 ; j++)
        {
            tmp = answer[idx2 - j];                 // 끝의 원소는 index가 작아져야함
            answer[idx2 - j] = answer[idx1 + j];    
            answer[idx1 + j] = tmp;                 // 첫 원소는 커져야함
        }
    }
    
    return answer;
}