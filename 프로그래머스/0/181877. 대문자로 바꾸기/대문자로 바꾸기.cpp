#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string myString) {
    string answer = "";
    cout << (int) 'a' << endl;
    cout << (int) 'A' << endl;
    cout << (int) 'z' << endl;
    //소문자 -> 대문자 = -32하면댐
    for (int i = 0 ; i < myString.size(); i++){
        char c = myString[i];
        if (c >= 97 && c <= 122){
            myString[i] -= 32;
        }
    }
    return myString;
}