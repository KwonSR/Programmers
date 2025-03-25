#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num) {
    int answer = 0;
    
    // size는 주어진 n % w == 0이면 몫만큼 필요하고, 아니면 한줄이 더 필요함
    // 이중벡터의 각 원소의 길이를 정해주기 위해서 필요
    int size = n % w == 0 ? n / w : n / w + 1;
    // vec의 크기는 w
    // vec의 각 원소는 vector<int>로 만들고 그 vector의 크기는 size만큼 설정
    // vec의 각 원소는 택배번호 num을 꺼내기 위한 번호들의 모임 (0은 제외, 초기화를 0으로 하기때문)
    vector<vector<int>> vec(w, vector<int>(size, 0));
    
    int idx = 0;    // 원하는 택배 번호가 담긴 vector의 idx를 담기 위한 변수
    int val = 1;    // 택배 번호
    for(int i = 0 ; i < size ; i++) 
    {
        // i % 2 == 0 -> 정방향        i % 2 != 0 -> 역방향
        if(i % 2 == 0)
        {
            for(int j = 0 ; j < w ; j++)    
            {
                // 전체 택배 개수 n 보다 val이 크다면 break;
                if(val > n)
                    break;
                // 꺼내려는 택배 번호 num과 val 이 같으면 해당 j 값을 저장
                if(val == num)
                    idx = j;
                vec[j][i] = val++;
            }
        }
        else
        {
            for(int j = w-1 ; j >= 0 ; j--)    
            {
                if(val > n)
                    break;
                if(val == num)
                    idx = j;
                vec[j][i] = val++;
            }
        }
    }

    // vec가 0으로 초기화 되었기때문에 0인 경우는 체크하지 않음
    for(int i = 0 ; i < vec[idx].size() ; i++)
        if(vec[idx][i] >= num && vec[idx][i] != 0)
            answer++;
    
    return answer;
}