// 累積和

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N, Q, L, R;
int C[100009], P[100009];
long long S1[100009], S2[100009];

int main() {
    cin >> N;

    S1[0] = 0;
    S2[0] = 0;  

    rep(i, N+1) {
        if (i == 0) continue;

        cin >> C[i] >> P[i];
        if (C[i] == 1) {
            S1[i] = S1[i-1] + P[i];
            S2[i] = S2[i-1];
        } else {
            S1[i] = S1[i-1];
            S2[i] = S2[i-1] + P[i];
        }
    }

    cin >> Q;

    rep(i, Q) {
        cin >> L >> R;
        cout << S1[R] - S1[L-1] << " " << S2[R] - S2[L-1] << endl;
    }


    return 0;
}