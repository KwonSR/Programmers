#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    
    int idx = 0;
    for(int i = 0 ; i < index_list.size() ; i++)
    {
        idx = index_list[i];
        answer.push_back(my_string[idx]);
    }
    
    return answer;
}