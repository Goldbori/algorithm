#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<vector<int>> computers) {
    vector<int> visited(0, n);
    
    for (int i = 0 ; i < visited.size() ; i++) {
        cout << visited[i] << endl;
    }
}