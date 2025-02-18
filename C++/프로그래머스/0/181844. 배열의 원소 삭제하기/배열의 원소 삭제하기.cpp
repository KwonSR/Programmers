#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    
    for(int i = 0 ; i < arr.size() ; i++)
    {
        for(int j = 0 ; j < delete_list.size() ; j++)
        {
            if(arr[i] == delete_list[j])
            {
                arr.erase(arr.begin()+i);
                i--;
            }
        }
    }
    
    return arr;
}