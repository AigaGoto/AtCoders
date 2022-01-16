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


long calc(long a, long N) {
    string str_N = to_string(N);
    int size = str_N.size();

    if (size > 1) {
        rep(i, size) {
            str_N = str_N.substr(size-1, 1) + str_N.substr(0, size-1);
            if (str_N[0] != '0') {
                // cout << str_N << endl;
                N = stol(str_N);
                if (N % a == 0) {
                    return calc(a, N / a) + 2;
                }
            }
        }
    } else {
        if (N % a == 0) {
            return calc(a, N / a) + 1;
        }
    }

    if (N == 1) return 1;
    else return -100000000;

}

int main() {
    long a, N;
    cin >> a >> N;

    long ans = calc(a, N);

    if (ans > 0) cout << ans << endl;
    else cout << -1 << endl;

    return 0;
}