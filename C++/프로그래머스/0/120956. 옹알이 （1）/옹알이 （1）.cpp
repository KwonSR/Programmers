#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    vector<string> sound = {"aya", "ye", "woo", "ma"};
    string space = " ";
    string empty = "";

    for(int i = 0 ; i < sound.size() ; i++)
    {
        for(int j = 0 ; j < babbling.size() ; j++)
            if( babbling[j].find(sound[i]) != string::npos )
                babbling[j].replace(babbling[j].find(sound[i]), sound[i].size(), space);
    }

    for(int i = 0 ; i < babbling.size() ; i++)
        babbling[i].erase(remove(babbling[i].begin(), babbling[i].end(), ' '), babbling[i].end());
    
    for(int i = 0 ; i < babbling.size() ; i++)
        if(babbling[i].empty())
            answer++;
    
    return answer;
}