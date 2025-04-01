#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    // 문제에서 정해진 데이터 형식
    vector<string> order = {"code", "date", "maximum", "remain"};
    
    // order에서 ext의 index 파악
    int ext_idx = find(order.begin(), order.end(), ext) - order.begin();
    // order에서 sort_by의 index 파악
    int sort_idx = find(order.begin(), order.end(), sort_by) - order.begin();
    
    // data[i][ext_idx]와 val_ext를 비교해 조건에 맞는 데이터를 answer.push_back
    for(int i = 0 ; i < data.size() ; i++)
    {
        if(data[i][ext_idx] < val_ext)
            answer.push_back(data[i]);
    }
    
    // 오름차순으로 정렬
    // 람다식을 써도 되지만 함수로 써도 됨
    sort(answer.begin(), answer.end(), [sort_idx](const vector<int>& a, const vector<int>& b){
        return a[sort_idx] < b[sort_idx];
    });
    
    return answer;
}