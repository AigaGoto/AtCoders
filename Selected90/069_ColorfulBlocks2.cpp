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

long long mod = 1000000007;

long long N, K;

long long binpower(long long a, long long b) {
    long long ans = 1;
    while (b != 0) {
        if (b % 2 == 1) {
            ans = (long long)(ans) * a % mod;
        }
        a = (long long)(a) * a % mod;
        b /= 2;
    }
    return ans;
}

int main() {
    cin >> N >> K;

    if (K == 1) {
        cout << (N == 1 ? 1 : 0) << endl;
    } else if (N == 1) {
        cout << K % mod << endl;
    } else if (N == 2) {
        cout << K * (K-1) % mod << endl;
    } else {
        cout << K * (K-1) % mod * binpower(K-2, N-2) % mod << endl;
    }

    return 0;
}