#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>
// #include <atcoder/all>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long L, R;
    cin >> L >> R;

    long long Li, Ri,true_max, alter_max;

    Li = L; Ri = R;
    true_max = 0; alter_max = 0;

    rep(i, 100) {
        Ri = R;
        alter_max = 0;
        rep(j, 100) {
            if (__gcd(Li, Ri) == 1 && alter_max < Ri-Li) {
                alter_max = Ri - Li;
            }
            Ri--;
            if (Ri == Li) break;
        }
        if (true_max < alter_max) {
            true_max = alter_max;
        }
        Li++;
        if (Li == R) break;
        }

    cout << true_max << endl;

    return 0;
}