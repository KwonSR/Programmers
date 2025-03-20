#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer = strings;
    
    // 버블정렬
    string tmp;
    for(int i = 0 ; i < answer.size() - 1 ; i++)
    {
        for(int j = 0 ; j < answer.size() - 1 ; j++)
        {
            // answer[j]의 n번째 문자열이 answer[j+1]의 n번째 문자열보다 크다면
            // 자리 바꾸기
            if(answer[j][n] > answer[j+1][n])
            {
                tmp = answer[j];
                answer[j] = answer[j + 1];
                answer[j + 1] = tmp;
            }
            // 만약 같은 문자라면
            else if(answer[j][n] == answer[j+1][n])
            {
                // answer[j].compare(answer[j+1])
                // 값이 0보다 크면 answer[j+1], answer[j] 순서
                // 값이 0이면 answer[j] = answer[j+1]
                // 값이 0보다 작으면 answer[j] answer[j+1] 순서
                if(answer[j].compare(answer[j + 1]) > 0)
                {
                    tmp = answer[j];
                    answer[j] = answer[j + 1];
                    answer[j + 1] = tmp;
                }
            }
        }
    }
    return answer;
}