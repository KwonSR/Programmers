#include <string>
#include <vector>

using namespace std;

// for loop로 풀 수 있지만, 시간이 너무 오래걸렸음

// n = 4 일때 배열 그림
// [1 2 3 4]   ← 0번째 행 -> max(0, 0) + 1, max(0, 1) + 1 ... 
// [2 2 3 4]   ← 1번째 행 -> max(1, 0) + 1, max(1, 1) + 1 ...
// [3 3 3 4]   ← 2번째 행
// [4 4 4 4]   ← 3번째 행

// arr[i][j] = max(i, j) + 1
// i > j인 경우 값은 i + 1
// i < j인 경우 값은 j + 1
// i == j인 경우 둘 다 같으니 값 + 1
// -> 항상 둘 중 큰 인덱스 + 1이 해당 칸의 값이 된다.

// 문제에서 left <= index <= right 범위라고 했으니
// left -> right로 증가하면서
// row, col 값을 구한 후 두 값중 큰 값에 +1을 해서 원하는 값을 찾는다.

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for(long long i = left ; i <= right ; i++)
    {
        int row = i / n;
        int col = i % n;
        answer.push_back(max(row, col) + 1);
    }
    
    return answer;
}