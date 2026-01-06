#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string s;
    string result="";
    cin >> s;
    int i = 0;
    while(i < s.length()){
        if(s[i] == '.'){
            result += ".";
            i++;
            continue;
        }
        int cnt = 0;
        int tmp_i = i;
        while (tmp_i < s.length() && s[tmp_i] == 'X'){
            cnt++;
            tmp_i++;//다음거
        }
        
        int cur_cnt = cnt;
        if (cur_cnt % 2 != 0){
            cout << -1;
            return 0;
        }
        
        while (cur_cnt >= 4){
            result += "AAAA";
            cur_cnt -=4;
        }
        
        while (cur_cnt >= 2){
            result += "BB";
            cur_cnt -= 2;
        }
        
        i = tmp_i;
        
    }
    cout << result;
    return 0;
}