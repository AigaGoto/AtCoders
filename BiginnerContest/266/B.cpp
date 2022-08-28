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

long long N;

int main() {
    cin >> N;
    long long a = 998244353;

    int ans = N % a;

    if (ans < 0) {
        ans = a + ans;
    }

    cout << ans << endl;

    return 0;
}