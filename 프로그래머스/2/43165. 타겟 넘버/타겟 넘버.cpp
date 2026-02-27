#include <string>
#include <vector>

using namespace std;



void dfs(vector<int>& numbers, int ind, int cnt, const int target, int &answer) {
    
    if (ind == numbers.size() && cnt == target) {
        answer++;
        return;
    }else if (ind == numbers.size()) return;
    
    int cur = numbers[ind];
    
    dfs(numbers, ind+1, cnt+cur, target, answer);
    dfs(numbers, ind+1, cnt-cur, target, answer);
    
    return;
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    int cnt = 0;
    dfs(numbers, 0, cnt, target, answer);
    return answer;
}