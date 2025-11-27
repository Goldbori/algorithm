#include <string>
#include <vector>

using namespace std;
//플레이어가 살아있는지??
bool isPlayerAlive(int currentHealth, bool& dead){
    if (currentHealth <= 0) dead = true;
    return (currentHealth > 0);
}

//공격 들어옴??
bool isUnderAttack(int currentTime, int attackTime){
    return currentTime == attackTime;
}


int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    int combo = 0;
    int time = 1;
    int attackCounter = 0;
    int playerHealth = health;
    int fullCombo = bandage.at(0);
    int healAmount = bandage.at(1);
    int bonusHealAmount = bandage.at(2);
    bool dead = false;
    
    while (isPlayerAlive(playerHealth, dead)){
        if (attackCounter == attacks.size()) break;
        if (isUnderAttack(time, attacks.at(attackCounter).at(0))){
            combo = 0;
            playerHealth -= attacks.at(attackCounter).at(1);
            attackCounter++;
            time++;
            continue;
        }
        
        else{
        playerHealth += healAmount;
        combo++;
        if (combo == fullCombo){
            combo = 0;
            playerHealth += bonusHealAmount;
        }
        if (playerHealth >= health){
            playerHealth = health;
        }
        }
        time++;
        //처리완료
        
        
    }
    
    if (dead){ 
        answer = -1;
        
    }else {
        answer = playerHealth;
    }
    
    return answer;
}