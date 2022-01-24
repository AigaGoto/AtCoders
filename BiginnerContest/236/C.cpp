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
    int N, M;
    cin >> N >> M;

    string S[N], T[M];

    rep(i, N) cin >> S[i];
    rep(i, M) cin >> T[i];

    int j = 0;

    rep(i, N) {
        if (S[i] == T[j]) {
            j++;
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}