// 計算量をしっかりと見積もる
// O(N^5)だからといって諦めない

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

long N, P, Q;
long A[109];

int main() {
    cin >> N >> P >> Q;
    rep(i, N) cin >> A[i];

    long ans = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < i; j++) {
            for(int k = 0; k < j; k++) {
                for(int l = 0; l < k; l++) {
                    for(int m = 0; m < l; m++) {
                        if(A[i]*A[j]%P*A[k]%P*A[l]%P*A[m]%P == Q) ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}