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
    long long N, L ,W;
    cin >> N >> L >> W;

    long long a[N+1];

    rep(i, N) cin >> a[i];
    a[N] = L;

    long long left = 0, right = 0;
    long long all_n = 0;
    long long add_n = 0.0;


    rep(i, N+1) {
        right = a[i];
        if (right >= left) {
            add_n = (right - left) / W;
            if ((right- left) % W != 0) add_n += 1;
            all_n = all_n + (long long)(add_n);
        }
        left = right+W;
    }

    cout << all_n << endl;

    return 0;
}