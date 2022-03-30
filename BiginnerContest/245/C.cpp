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
    long long N, K;
    cin >> N >> K;

    vector<long long> A(N), B(N);

    vector<bool> bool_a(N-1), bool_b(N-1);

    long long now, pre;

    rep(i, N) {
        cin >> A[i];
        if(i != 0) {
            if (abs(A[i] - pre) <= K) bool_a[i-1] = true;
            else bool_a[i-1] = false;
        }
        pre = A[i];
    }

    rep(i, N) {
        cin >> B[i];
        if(i != 0) {
            if (abs(B[i] - pre) <= K) bool_b[i-1] = true;
            else bool_b[i-1] = false;
        }
        pre = B[i];
    }

    bool a_ok = true, b_ok = true;

    rep(i, N-1) {
        if (a_ok && b_ok) {
            if (bool_a[i] || bool_b[i]) continue;
            else {
                
            }
        }
        

    }

    return 0;
}