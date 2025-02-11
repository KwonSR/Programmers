#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    int v1=1, v2 = 0;
    for(int i = 0 ; i < num_list.size(); i++)
    {
        v1 *= num_list[i];
        v2 += num_list[i];
    }
    
    return v1 < (v2*v2) ? 1 : 0;
}