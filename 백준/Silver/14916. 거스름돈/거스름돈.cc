#include <iostream>
#include <vector>

using namespace std;

//구하는것 : 최소동전의 개수
//입력값 : 거스름돈 액수
//출력값 : 거스름돈 동전의 최소개수, 거슬러줄 수 없으면 -1출력
//고려할 것 : 2원 또는 5원동전만 가지고있음.

int main(){
    
    int money;
    int coin = 0;
    
    cin >> money;
    
    while (money > 0 ){
        if (money % 5 == 0){
            coin += (money / 5);
            money = 0;
            break;
        }
        money -= 2;
        coin++;
    }
    
    if (money == 0){
        cout << coin;
    }else{
        cout << -1;
    }
    return 0;
}