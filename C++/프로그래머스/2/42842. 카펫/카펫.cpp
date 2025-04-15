#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;

    // brown과 yellow의 합은 직사각형의 전체 칸수를 뜻한다.
    // 즉, 가로 세로의 곱으로 나타낼 수 있다
    //  => 약수의 조합으로 구성되어 있다는 뜻
    
    // 문제에서 조건이 width >= height 이기때문에
    // 1부터 확인하기 위해 for loop는 height가 기준이 된다.
    // 약수의 조합만 확인하면 되기에 범위는 height * height <= total
    //  -> height <= sqrt(total)을 해도 됨
    // 테두리만 갈색이기 때문에 yellow의 면적은 (가로-2) x (세로-2)가 된다.
    // 즉 total이 height로 나누어 떨어지면서
    //     (가로-2) x (세로-2) == yellow 라면 문제에서 원하는 답
    
    int total = brown + yellow;
    for(int height = 1 ; height * height <= total ; height++)
    {
        if(total % height == 0)
        {
            int width = total / height;
            if((width - 2) * (height - 2) == yellow)
            {
                answer.push_back(width);
                answer.push_back(height);
                break;
            }
        }
    }
    
    return answer;
}