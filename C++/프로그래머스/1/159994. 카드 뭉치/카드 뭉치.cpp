#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    
    int j = 0;      // cards1 index
    int k = 0;      // cards2 index
    
    // for loop로 vector goal 탐색
    for(int i = 0 ; i < goal.size() ; i++)
    {
        // goal[i] 가 cards1[j]와 같다면 cards1 index++ 
        if(goal[i] == cards1[j])
        {
            j++;
            continue;
        }
        // goal[i] 가 cards2[k]와 같다면 cards2 index++
        else if(goal[i] == cards2[k])
        {
            k++;
            continue;
        }
        // goal[i]가 cards1 & cards2 중 같은 것이 없다면
        else
        {
            answer = "No";
            break;
        }
    }
    
    return answer;
}