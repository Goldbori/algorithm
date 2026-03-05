#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;



string solution(vector<int> numbers) {
    string answer = "";
    //priority_queue<string, vector<string> ,cmp> pq;
    
    sort(numbers.begin(), numbers.end(),[](const int& a, const int& b) {
        string tmp1 = to_string(a) + to_string(b);
        string tmp2 = to_string(b) + to_string(a);
        
        return tmp1 > tmp2;
    });
    
 
    
    for (int i = 0 ; i < numbers.size() ; i++ ) {
        answer += to_string(numbers[i]);
    }
    if (answer[0] == '0') answer = "0";
    return answer;
}