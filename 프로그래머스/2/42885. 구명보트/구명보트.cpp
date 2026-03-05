#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    
    
    int answer = 0;
    
    sort(people.begin(), people.end());
    //vector<int> saved(people.size(), 0);
    auto left = people.begin();
    auto right = people.end()-1;
    while (left <= right) {
        if (left == right) {
            answer++;
            break;
        }
        if(*right + 40 >limit) {
            answer++;
            right--;
            continue;
        }
        
        else if (*right + *left <= limit) {
            answer ++;
            right--;
            left++;
            continue;
        }else {
            answer ++;
            right--;
            continue;
        }
    }
    
    return answer;
}