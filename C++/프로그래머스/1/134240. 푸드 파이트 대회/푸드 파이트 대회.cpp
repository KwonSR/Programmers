#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    string tmp;
    for(int i = 1 ; i < food.size() ; i++)
    {
        if(food[i] == 1)
            continue;
        
        int end = food[i] / 2;
        for(int j = 1 ; j <= end ; j++)
            tmp += to_string(i);
    }
    
    answer += tmp + "0";
    reverse(tmp.begin(), tmp.end());
    answer += tmp;
    
    return answer;
}