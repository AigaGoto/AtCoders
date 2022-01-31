#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
// #include <atcoder/all>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long H, W;
    cin >> H >> W;

    long long A[H][W];

    rep(i, H) {
        rep(j, W) {
            cin >> A[i][j];
        }
    }

    rep(i, W) {
        rep(j, H) {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}