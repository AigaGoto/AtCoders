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

pair<long long, long long> plus_coin(long long X,long long money) {
    long long c = 0;
    while(true) {
        if (X > 0) {
            X = X - money;
            c++;
        } else {
            break;
        }
    }
    return abs(X), c;
}

int main() {
    int N;
    long long X, a;
    cin >> N >> X;
    vector<long long> A;

    pair<long long, long long> receiver;

    long long coin = 0;
    long long back_coin = 0;

    rep (i, N) {
        cin >> a;
        A.push_back(a);
    }

    sort(A.begin(), A.end());

    for(int i = N-1; i>= 0; i--) {
        receiver = plus_coin(X, A[i]);
        coin += receiver.second;
        if (X == 0) break;
    }

    return 0;
}