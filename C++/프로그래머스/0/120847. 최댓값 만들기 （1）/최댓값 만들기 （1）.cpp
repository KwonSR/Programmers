#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(),numbers.end());
    
    //sort(numbers.begin(),numbers.end(), less<int>());     //오름차순
    //sort(numbers.begin(),numbers.end(), greater<int>());  //내림차순
    
    int len = numbers.size();    
    return numbers[len-1]*numbers[len-2];
}