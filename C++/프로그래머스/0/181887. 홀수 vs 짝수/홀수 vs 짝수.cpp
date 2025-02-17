#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int num1 = 0, num2 = 0;

    for(int i = 0 ; i < num_list.size() ; i++)
    {
        if(i%2==0)
            num1 += num_list[i];
        else
            num2 += num_list[i];
    }
    
    return num1 > num2 ? num1 : num2;
}