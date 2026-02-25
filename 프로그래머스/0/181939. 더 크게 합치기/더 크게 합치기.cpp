#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string as = to_string(a);
    string bs = to_string(b);
    string abs = as + bs;
    string bas = bs + as;
    int x = stoi(abs);
    int y = stoi(bas);
    
    answer = (x>y?x:y);
    return answer;
}