#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    bool answer = 0;
    string iii = ineq+eq;
    if (iii == ">=") {
        return n >= m;
    }else if(iii == "<=") {
        return n<=m;
    }else if (iii == "<!") {
        return (n<m);
    }else{
        return (n>m);
    }
    return answer;
}