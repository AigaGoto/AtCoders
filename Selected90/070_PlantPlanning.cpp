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
vector<long> X, Y;
long x, y;

long median(vector<long> A) {
    if (N % 2 == 1) {
        return A[N/2];
    } else {
        return (A[N/2] + A[N/2 -1]) / 2;
    }
}

int main() {
    cin >> N;

    rep(i, N) {
        cin >> x >> y;
        X.push_back(x);
        Y.push_back(y);
    }

    // 入力値をソートし、中央値を求める
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());

    long mid_x = median(X);
    long mid_y = median(Y);

    long long dist_x = 0;
    long long dist_y = 0;

    rep(i, N) {
        dist_x += abs(X[i] - mid_x);
        dist_y += abs(Y[i] - mid_y);
    }

    cout << dist_x + dist_y << endl;

    return 0;
}