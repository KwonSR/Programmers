#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    int tmp = -1;
    for(int i = 0 ; i < arr.size() ; i++)
    {
        if(tmp != arr[i])
        {
            answer.push_back(arr[i]);
            tmp = arr[i];
        }
    }

    return answer;
}