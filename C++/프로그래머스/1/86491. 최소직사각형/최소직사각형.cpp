#include <string>
#include <vector>

using namespace std;

// 문득 대소를 비교해서 정렬을 해보면 어떨까? 하면서 풀게된 문제
// (w,h)에서 큰 값을 w, 작은값을 h로 교체
// 그 이후 w, h 둘다 가장 큰 값을 선택
int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    int width = 0;
    int height = 0;
    int tmp = 0;
    for(int i = 0 ; i < sizes.size() ; i++)
    {
        if(sizes[i][0] < sizes[i][1])
        {
            tmp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
        }
        
        if(sizes[i][0] > width)
            width = sizes[i][0];
        if(sizes[i][1] > height)
            height = sizes[i][1];
    }
    answer = width * height;
    
    return answer;
}