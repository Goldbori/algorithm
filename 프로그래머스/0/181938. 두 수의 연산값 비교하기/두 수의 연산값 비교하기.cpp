#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    
    string ab = to_string(a) + to_string(b);
    int abi = stoi(ab);
    
    
    int answer = 0;
    
    answer = (abi > (2*a*b) ? abi : 2*a*b);
    return answer;
}