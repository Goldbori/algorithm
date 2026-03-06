#include <iostream>
#include <vector>
#include <algorithm>
//사고의 흐름
//일단 최대값을 구한다 -> 최적해를 찾는다? -> 완전탐색? 그리디?
//근데 이건 선택이 이후의 선택에 영향을 주기 때문에 그리디는 안댐.
//배열의 길이가 10만이라서 메모리는 대충 400KB정도 
// 그리고 완전탐색을 한다면 O(n!)이라서 때려죽여도 못품
//그래서 DP로 푼다!
//암튼 원하는건 최적해.
//근데 어케 시작해야할지 감도안옴

using namespace std;
vector<bool> used;



int solution(vector<int> sticker)
{
    int answer = 0;
    int n = sticker.size();
    vector<int> dp1(n,0), dp2(n,0);
    
    //dp1 초기화
    dp1[0] = sticker[0];
    dp1[1] = sticker[0];
    //dp2 초기화
    dp2[0] = 0;
    dp2[1] = sticker[1];
    
    //dp1 Bottom Up
    for (int i = 2 ; i < sticker.size()-1 ; i++ ) {
        dp1[i] = max(dp1[i-1], dp1[i-2] + sticker[i]);
    }
    //dp2 Bottom Up
    for (int i = 2 ; i < sticker.size() ; i++ ) {
        dp2[i] = max(dp2[i-1], dp2[i-2] + sticker[i]);
    }
    answer = max(*max_element(dp1.begin(), dp1.end()), *max_element(dp2.begin(), dp2.end()));
    return answer;
}