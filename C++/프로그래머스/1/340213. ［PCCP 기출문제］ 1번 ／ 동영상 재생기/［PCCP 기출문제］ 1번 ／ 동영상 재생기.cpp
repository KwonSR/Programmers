#include <string>
#include <vector>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    
    // 모든 시간을 초 단위로 변경
    int p = stoi(pos.substr(0, 2)) * 60 + stoi(pos.substr(3, 2));
    int total = stoi(video_len.substr(0, 2)) * 60 + stoi(video_len.substr(3, 2));
    int op_s = stoi(op_start.substr(0, 2)) * 60 + stoi(op_start.substr(3, 2));
    int op_e = stoi(op_end.substr(0, 2)) * 60 + stoi(op_end.substr(3, 2));
    
    // 처음 pos가 오프닝에 껴있는지 확인하기
    if(op_s <= p && p <= op_e)
        p = op_e;
    
    for(int i = 0 ; i < commands.size() ; i++)
    {
        // prev인 경우 10초 빼기
        if(commands[i] == "prev")
        {
            p -= 10;
            // 0보다 작으면 시작위치로 조정
            if(p < 0)
                p = 0;
        }
        else if(commands[i] == "next")
        {
            p += 10;
            // 동영상 전체 길이보다 크다면 영상 끝으로 이동
            if(p > total)
                p = total;
        }
        
        // 이동 후 오프닝 범위에 있는지 확인
        if(op_s <= p && p <= op_e)
            p = op_e;
    }
    
    // 초 -> 분으로 변환
    // 몫이 10보다 작은경우 -> 0~9분 -> 앞에 "0" 추가 
    // 나머지가 10보다 작은 경우 -> 0~9초 -> 앞에 "0" 추가
    if(p / 60 < 10)
        answer = "0" + to_string(p / 60) + ":" + (p % 60 < 10 ? "0" + to_string(p % 60) : to_string(p % 60));
    else
        answer = to_string(p / 60) + ":" + (p % 60 < 10 ? "0" + to_string(p % 60) : to_string(p % 60));
    
    return answer;
}