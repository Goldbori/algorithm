#include <iostream>
#include <vector>


using namespace std;



int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int dc, tc;

    cin >> dc;
    cin >> tc;

    vector<int> data(dc+1, 0);

    for (int i = 1; i <= dc; i++) {
        int tmp;
        cin >> tmp;
        data[i] = tmp;
    }

    vector<int> sum(dc+1, 0);

    sum[1] = data[1];

    for (int i = 2; i <= dc; i++) {
        sum[i] = sum[i - 1] + data[i];
    }

    int ind1, ind2;

    while (tc-- > 0) {
        
        cin >> ind1;
        cin >> ind2;

        cout << (sum[ind2] - sum[ind1 - 1]) << "\n";

    }

}