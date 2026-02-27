#include <string>
#include <vector>
#include <iostream>

using namespace std;


void dfs(int now, vector<vector<int>>& computers, vector<int>& visited, const int n) {
    
    //방문한 곳? 생략
    if (visited[now] == 1) return;
    
    //방문체크
    visited[now] = 1;
    
    for (int i = 0 ; i < n ; i++){
        if (computers[now][i] == 1 && i != now) {
            dfs(i, computers, visited, n);
        }
    }
    
    
}
int solution(int n, vector<vector<int>> computers) {
    vector<int> visited(n, 0);
    int cnt = 0;
   
    
    for (int i = 0 ; i < n ; i++){
        if (visited[i] == 0) {
            dfs(i, computers, visited, n);
            cnt++;
        }
    }
    
    return cnt;
}