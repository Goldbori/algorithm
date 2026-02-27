#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> visited;
int nn;

void dfs(int now, vector<vector<int>>& computers) {
    
    //방문한 곳? 생략
    if (visited[now] == 1) return;
    
    //방문체크
    visited[now] = 1;
    
    for (int i = 0 ; i < nn ; i++){
        if (computers[now][i] == 1 && i != now) {
            dfs(i, computers);
        }
    }
    
    
}
int solution(int n, vector<vector<int>> computers) {
    visited.assign(n, 0);
    int cnt = 0;
    nn = n;
    for (int i = 0 ; i < n ; i++){
        if (visited[i] == 0) {
            dfs(i, computers);
            cnt++;
        }
    }
    
    return cnt;
}