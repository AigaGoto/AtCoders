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


long long a[1000][1000];


int main() {
    long long N, X;
    cin >> N >> X;

    long L[N];

    vector<long long> b, c;

    rep(i, N) {
        cin >> L[i];
        rep(j, L[i]) cin >> a[i][j];
    }

    rep(i, L[0]) b.push_back(a[0][i]);

    rep(i, N-1) {
        rep(j, b.size()) {
            rep(k, L[i+1]) {
                c.push_back(b[j] * a[i+1][k]);
            }
        }
        b.clear();
        b = c;
        c.clear();
    }

    sort(b.begin(), b.end());

    auto left = lower_bound(b.begin(), b.end(), X);
    auto right = upper_bound(b.begin(), b.end(), X);

    cout << right - left << endl;


    return 0;
}