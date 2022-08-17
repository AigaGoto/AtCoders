// 漸化式を立ててDPを解く

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const int divide = 1e9+7;

int N, L;
long long DP[100009];

int main() {
    cin >> N >> L;

    DP[0] = 1;

    rep(i, N+1) {
        if (i == 0) DP[i] = 1;
        else if (0 < i && i < L) DP[i] = DP[i-1];
        else {
            DP[i] = (DP[i-1] + DP[i-L]) % divide;
        }
    }

    cout << DP[N] << endl;

    return 0;
}