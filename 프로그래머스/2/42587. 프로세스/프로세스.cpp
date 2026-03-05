#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    //cout << *max_element(priorities.begin(), priorities.end());
    vector<pair<int,int>> p;
    queue<pair<int,int>> q;
    for (int i = 0 ; i < priorities.size() ; i++) {
        // p.push_back(make_pair(priorities[i], i));
        q.push(make_pair(priorities[i], i));
    }
    
    int cur_max = *max_element(priorities.begin(), priorities.end());
    int orders = 1;
    while (!q.empty()) {
        
        pair<int,int> tmp = q.front();
        q.pop();
        
        if (tmp.first == cur_max) {//얘는 이제 제외시킬거임
            priorities[tmp.second] = -1;
            cur_max = *max_element(priorities.begin(), priorities.end());
            if (tmp.second == location) {
                answer = orders;
            }
            
            orders++;
            continue;
        }else {
            q.push(tmp);
        }
       
    }
    
    return answer;
}