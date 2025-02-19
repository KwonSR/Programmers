#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    
    int len = common.size();

    if((common.at(1) - common.at(0)) == (common.at(2) - common.at(1)))
        return common.at(len-1) + (common.at(1) - common.at(0));
    else
        return common.at(len-1) * (common.at(1) / common.at(0));
}