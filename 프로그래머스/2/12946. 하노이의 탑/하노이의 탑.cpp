#include <string>
#include <vector>
#include <iostream>
using namespace std;

void hanoi(int n, int from, int mid, int to, vector<vector<int>> &a) {
    
    //한개라면 바로 옮긴다
    if (n == 1) {
        a.push_back({from, to});
        return;
    }
    //맨밑에 한개빼고 다 mid로 옮긴다.
    hanoi(n-1, from, to, mid, a);
    
    //마지막한개는 이제 옮긴다?
    a.push_back({from, to});
    
    //그리고 중간기둥 옮겨버린다???
    hanoi(n-1, mid, from, to, a);
    return;
    
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    
    hanoi(n, 1, 2, 3, answer);
    
    return answer;
}