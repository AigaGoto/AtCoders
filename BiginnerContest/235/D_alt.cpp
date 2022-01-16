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

long a, N;

long calc(long X) {
    string str_X = to_string(X);
    int size = str_X.size();

    if (X == N) return 1;
    else if (X > N) return -10000;

    if (size > 1) {
        rep(i, size) {
            str_X = str_X.substr(size-1, 1) + str_X.substr(0, size-1);
            if (str_X[0] != '0') {
                // cout << str_X << endl;
                X = stol(str_X);
                return calc(a, X*a) + 2;
            }
        }
    } else {
        return calc(a, X * a) + 1;
    }

}

int main() {
    cin >> a >> N;

    long ans = calc(1);

    if (ans > 0) cout << ans << endl;
    else cout << -1 << endl;

    return 0;
}