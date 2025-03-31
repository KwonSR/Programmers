#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer_1 = {1, 2, 3, 4, 5};                 // 1번 수포자가 찍는 방식
    vector<int> answer_2 = {2, 1, 2, 3, 2, 4, 2, 5};        // 2번 수포자가 찍는 방식
    vector<int> answer_3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};  // 3번 수포자가 찍는 방식
    vector<int> answer;
    vector<int> correct(3, 0);                              // 수포자 3명이 맞힌 문제 수
    
    for(int i = 0 ; i < answers.size() ; i++)
    {
        if(answer_1[i % 5] == answers[i])       // 5씩 반복
            correct[0]++;
        if(answer_2[i % 8] == answers[i])       // 8씩 반복
            correct[1]++;
        if(answer_3[i % 10] == answers[i])      // 10씩 반복
            correct[2]++;
    }
    
    // 최대값 찾기
    int max = *max_element(correct.begin(), correct.end());
    // correct의 시작부터 최대값과 같으면 index + 1을 담아줌
    for(int i = 0 ; i < correct.size() ; i++)
        if(max == correct[i])
            answer.push_back(i+1);
    
    return answer;
}