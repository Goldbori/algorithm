#include <string>
#include <vector>
#include <stack>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> land) {
    
    vector<vector<bool>> visited(land.size(), vector<bool>(land.at(0).size(), false));
    stack<pair<int,int>> st;
    st.push(make_pair(0,0));
    int id = 2;
    map<int,int> sizes;
    
    for (int r = 0 ; r < land.size() ; r++){
        for (int c = 0 ; c < land.at(0).size() ; c++){
            
            if (visited[r][c] || land[r][c] == 0) continue;
            
            visited[r][c] = true;
            int cnt = 0;
            stack<pair<int,int>> st;
            st.push(make_pair(r,c));
            land[r][c] = id;
            
            while (!st.empty()){
                auto [x,y] = st.top();
                st.pop();
                cnt++;
                
                for (auto [dx,dy] : vector<pair<int,int>>{{1,0},{-1,0},{0,1},{0,-1}}){
                    int nx = x + dx;
                    int ny = y + dy;
                    
                    if (nx < 0 || ny < 0 || nx >= land.size() || ny >= land.at(0).size()) continue;
                    
                    if (land[nx][ny] == 1){
                        visited[nx][ny] = true;
                        land[nx][ny] = id;
                        st.push({nx,ny});
                    }
                }
                
            }
            sizes[id] = cnt;
            id++;
            
        }
        
        
    }

    vector<int> sichu;
    for (int c = 0 ; c < land.at(0).size() ; c++){
        set<int> s;
        for (int r = 0 ; r < land.size() ; r++){
            if (land[r][c] > 1){
                s.insert(land[r][c]);
            }
        }
        set<int>::iterator iter = s.begin();
        int sum = 0;
        for (; iter != s.end() ; iter++){
            sum += sizes[*iter];
        }
        sichu.push_back(sum);
    }
    
    for(int i = 0 ; i < sichu.size() ; i++){
        cout << sichu[i] << ' ';
    }
    int answer = *max_element(sichu.begin(), sichu.end());
    return answer;
}