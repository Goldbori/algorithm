#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int floor = triangle.size();
    vector<vector<int>> dp;
    
    //dp배열 초기화
    for (int i = 0 ; i < floor ; i++ ) {
        dp.push_back(vector<int>(i+1, -1));
    }
    dp[0][0] = triangle[0][0];
    cout << dp[0][0] <<endl;
    for (int i = 1 ; i < floor ; i++ ) {
        for (int j = 0 ; j < triangle[i].size() ; j++) {
            //i,j 칸 계산
            int row = i - 1;
            int col1 = j-1;
            int col2 = j;
            int tmp1 = -1;
            int tmp2 = -1;
            if (row >= 0 && col1>=0) {
                tmp1 = dp[row][col1];
            }
            if (row>=0 && col2 < triangle[row].size()) {
                tmp2 = dp[row][col2];
            }
            // cout << "------i : " << i << " j : " << j << "----------" << endl;
            // cout << "tmp1 : " << tmp1 << endl;
            // cout << "tmp2 : " << tmp2 << endl;
            // cout << "max : " << max(tmp1, tmp2) << endl;
            dp[i][j] = max(max(tmp1, tmp2) + triangle[i][j], dp[i][j]);
        }
    }
    
    answer = *max_element(dp[floor-1].begin(), dp[floor-1].end());
    
    return answer;
}