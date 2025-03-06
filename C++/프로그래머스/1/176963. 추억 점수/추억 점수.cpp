#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for(int i = 0 ; i < photo.size() ; i++)
    {
        int point = 0;
        for(int j = 0 ; j < photo[i].size() ; j++)
        {
            int idx = find(name.begin(), name.end(), photo[i][j]) - name.begin();
            if((name.end() - name.begin()) != idx)
                point += yearning[idx];
        }
        answer.push_back(point);
    }
    
    return answer;
}