#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    bitset<16> binary;
    string tmp;
    for(int i = 0 ; i < arr1.size() ; i++)
    {
        binary = (arr1[i] | arr2[i]);
        for(int i = n - 1 ; i >= 0 ; i--)
        {
            if(binary[i] == 1)
                tmp += "#";
            else
                tmp += " ";
        }
        answer.push_back(tmp);
        tmp.clear();        
    }    
    
    return answer;
}