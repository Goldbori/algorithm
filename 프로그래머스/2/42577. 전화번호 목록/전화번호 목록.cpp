#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    unordered_set<string> s;
    for (int i = 0 ; i < phone_book.size() ; i++ ){
        s.insert(phone_book[i]);
    }
    
    sort(phone_book.begin(), phone_book.end());
    
    for (int i = 0 ; i < s.size() ; i ++ ){
        string tmp = phone_book[i];
        string pre = "";
        for(int j = 0 ; j < tmp.size()-1 ; j++ ){
            pre += tmp[j];
            if (s.find(pre) != s.end()) {
                answer = false;
                break;
            }
        }
        if (!answer) break;
    }
    return answer;
}