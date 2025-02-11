#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    string s1, s2;
    // for(int i = 0 ; i < num_list.size() ; i++)
    // {
    //     if(num_list[i] % 2 == 1)
    //         s1 += to_string(num_list[i]);
    //     else
    //         s2 += to_string(num_list[i]);
    // }
    // answer = stoi(s1) + stoi(s2);
    
    for(auto num : num_list)
    {
        if(num%2)
            s1 += to_string(num);
        else
            s2 += to_string(num);
    }
    answer = stoi(s1) + stoi(s2);
    
    return answer;
}