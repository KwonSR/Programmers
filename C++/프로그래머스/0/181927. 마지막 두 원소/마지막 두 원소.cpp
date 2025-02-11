#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    int size = num_list.size();
    int last = num_list.back();
    
    last > num_list.at(size -2) ? num_list.push_back(last - num_list.at(size -2) ) : num_list.push_back(last * 2);
    
    return num_list;
}