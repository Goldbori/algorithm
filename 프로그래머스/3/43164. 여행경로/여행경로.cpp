#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//출발지는 "ICN" 인천공항
//티켓을 다 쓰는 경로 구하는듯 ㅇㅇ
//그럼 DFS로 백트래킹? 하면될듯
//가능한 경로 다구해서 알파벳으로 빠른순서를 반환
//하 슈발
//공항수가 10^4개, 인접행렬이면 4 byte * 10^8개 공간 ㄱㄴ은한데 걍 인접리스트 ㄱ
//쉬발 스트링이어서 해시맵쓸까...


vector<string> path;

vector<vector<string>> edge;

int ticket_cnt;

vector<bool> visited;
bool dfs(string from, int n) {
    
    if (n == ticket_cnt) return true;
    
    //모든 티켓 확인
    for (int i = 0 ; i < ticket_cnt ; i++) {
        //아직 사용안했고 현재 출발지와 동일한 티켓이라면
        if (!visited[i] && edge[i][0] == from) {
            //일단 써봐
            visited[i] = true;
            path.push_back(edge[i][1]);
            
            if (dfs(edge[i][1], n+1)) {
                //위 dfs에서 true반환되었다는건 경로완성
                return true;
            }
            //여긴 위의 경로 실패 -> 롤백
            path.pop_back();
            visited[i] = false;
            //다음티켓확인
        }
    }
    //티켓다봤는데 다 실패하거나 현재 출발지에 해당하는 티켓 없음.
    //여기까지 오면 실패
    return false;
    
}

vector<string> solution(vector<vector<string>> tickets) {
    vector<string> answer;
    
    //사전순 정렬
    sort(tickets.begin(), tickets.end());
    
    ticket_cnt = tickets.size();
    edge = tickets;
    path.clear();
    path.push_back("ICN");
    visited.assign(ticket_cnt, false);
    dfs("ICN", 0);
    answer = path;
    return answer;
}