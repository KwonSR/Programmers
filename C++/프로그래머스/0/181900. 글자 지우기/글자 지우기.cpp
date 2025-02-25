#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    
    for(int i = 0 ; i < my_string.size() ; i++)
    {
        if(find(indices.begin(), indices.end(), i) == indices.end())
            answer += my_string[i];
        else
            continue;
    }
    
//     for(auto i : indices)
//         my_string[i] = ' ';

//     for(auto str : my_string)
//         if(str != ' ')
//             answer += str;
    
    return answer;
}