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

int N;
int inp;

int main() {
    cin >> N;
    int ans = 0;
    rep(i, N) {
        cin >> inp;
        ans += inp;
    }

    cout << ans << endl;

    return 0;
}