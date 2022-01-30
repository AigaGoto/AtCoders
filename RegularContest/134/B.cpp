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
    long N;
    string S;

    cin >> N >> S;

    char left, right;

    rep(i, N / 2) {
        left = S[i];
        right = S[N-1-i];
        if (left > right) {
            S[i] = right;
            S[N-1-i] = left;
        }
    }

    cout << S;

    return 0;
}