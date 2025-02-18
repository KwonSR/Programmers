#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;
    
    int len = start_num - end_num + 1;
    for(int i = 0 ; i < len ; i++)
        answer.push_back(start_num--);
    
    return answer;
}