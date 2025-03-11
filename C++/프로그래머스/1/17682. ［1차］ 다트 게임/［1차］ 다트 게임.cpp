#include <string>
#include <vector>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int idx = 0;
    int point = 0;
    vector<int> score;
    
    for(int i = 0 ; i < dartResult.size() ; i++)
    {
        char c = dartResult[i];
        if('0' <= c && c <= '9')
        {
            point = c - '0';
            if(dartResult[i+1] == '0')
            {
                point = 10;
                i++;
            }
        }
        else if(c == '*')
        {
            if(idx == 1)
                score[idx - 1] *= 2;
            else
            {
                score[idx - 1] *= 2;
                score[idx - 2] *= 2;
            }
        }
        else if(c == '#')
            score[idx - 1] = -score[idx - 1];
        else
        {
            if(c == 'S')
                score.push_back(point);
            else if(c == 'D')
                score.push_back(point * point);
            else if(c == 'T')
                score.push_back(point * point * point);
            idx++;
        }
    }
    
    for(auto s : score)
        answer += s;
    
    return answer;
}