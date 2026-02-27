#include<vector>
#include <queue>

using namespace std;

//상 하 우 좌
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int solution(vector<vector<int>> maps)
{
    int answer = 0;
    int m = maps.size();
    int n = maps[0].size();
    //-1인 칸은 도달못함
    vector<vector<int>> dist(m, vector<int>(n, -1));
    queue<pair<int,int>> q;
    
    if (maps[0][0] == 0) return -1;
    
    dist[0][0] = 1 ; //시작칸은 1
    q.push({0,0});
    
    while (!q.empty()) {
        auto [y, x] = q.front();
        q.pop();
        
        for (int i = 0 ; i < 4 ; i++) {
            int ny = y+dy[i];
            int nx = x + dx[i];
            
            if (nx < 0 || ny < 0 || ny >=m || nx >= n) continue; //범위검사
            
            if (maps[ny][nx] == 0) continue; //벽검사
            
            if (dist[ny][nx] != -1) continue; //이미방문
            
            dist[ny][nx] = dist[y][x] + 1;
            q.push({ny, nx});
        }
    }
    
    
    return dist[m-1][n-1];  //도착했으면 최단거리, 도달못하면 -1반환
}