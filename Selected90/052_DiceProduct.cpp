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

int N;
int A[105][6];
int dice_sum[105];

const int divide = 1e9+7;

long long ans = 1;

int main() {
    cin >> N;
    rep(i, N) {
        rep(j, 6) {
            cin >> A[i][j];
            dice_sum[i] += A[i][j];
        }
    }

    rep(i, N) {
        ans = ans * dice_sum[i];
        ans %= divide;
    }

    cout << ans << endl;

    return 0;
}