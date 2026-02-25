#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;
    
    for (int i = 0 ; i < speeds.size() ; i++) {
        int remain = 100 - progresses[i];
        int day = (remain + speeds[i] - 1) / speeds[i];
        days.push_back(day);
    }
    
    //첫 번째 작업이 완료되는 날짜
    int today = days[0];
    int cnt = 1;
    
    for (int i = 1 ; i < days.size() ; i++ ) {
        if (days[i] <= today) { //일찍 완료된건
            cnt++;
        }else{  //하나라도 중간에 끊기면
            answer.push_back(cnt);
            //초기화
            today = days[i];
            cnt = 1;
        }
    }
    answer.push_back(cnt);
    return answer;
}