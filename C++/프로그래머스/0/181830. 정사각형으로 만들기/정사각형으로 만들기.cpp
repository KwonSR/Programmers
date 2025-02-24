#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int row_cnt = arr.size();
    int col_cnt = arr[0].size();
    
    if(row_cnt > col_cnt)
    {
        for(int i = 0 ; i < arr.size() ; i++)
        {
            for(int j = 0 ; j < (row_cnt - col_cnt) ; j++)
                arr[i].push_back(0);
        }
    }
    else
    {
        for(int i = 0 ; i < (col_cnt - row_cnt) ; i++)
            arr.push_back(vector<int>(col_cnt));
    }
    
    return arr;
}