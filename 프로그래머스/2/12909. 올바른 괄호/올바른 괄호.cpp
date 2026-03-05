#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{   
    stack<char> st;
    bool answer = true;

    for (char c : s){
        
        if (c == '('){
            st.push(c);
            continue;
        }
        if (c == ')') {
            if (st.empty()) {
                answer = false;
                break;
            }
            if (st.top() == ')') {
                answer = false;
                break;
            }
            else if (!st.empty()){
                st.pop();
            }
        }
        
    }
    if (!st.empty()) answer = false;
    
    return answer;
}