#include <string>
#include <vector>

using namespace std;

vector<int> possible;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    possible.assign(n,1);   //1개씩 있음
    
    for (int i = 0 ; i < reserve.size(); i++){  //여벌
        int ind = reserve[i] - 1;
        possible[ind] += 1;
    }
    for (int i = 0 ; i < lost.size(); i++){     //잃어버림
        int ind = lost[i] - 1;
        possible[ind] -= 1;
    }
    
    //2이상일때만 빌려주기 가능
    for (int i = 0 ; i < n ; i++){
        
        if (possible[i] < 2) continue;  //여벌 없으면 패스
        
        //난 빌려주기 가능!
        if (i == 0 ){
            if (n>1&&possible[1] == 0)
             possible[1] = 1;
            possible[0]--;
            continue;
        }
        
        if (i == n-1) {
            if (possible[i-1] == 0) {
                possible[i-1] = 1;
                possible[i]--;
                continue;
            }
        }
        
        if (possible[i - 1] == 0) {
            possible[i-1] = 1;
            possible[i]--;
            continue;
        }
        else if (i + 1 < n && possible[i+1] == 0) {
    possible[i+1] = 1;
    possible[i]--;
}
        
    }
    
    for (int i = 0 ; i < n ; i++) {
        if (possible[i] >= 1) answer++;
    }
    
    return answer;
}