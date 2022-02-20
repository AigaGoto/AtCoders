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
    double H;
    cin >> H;

    double ans = sqrt(H*(12800000 + H));

    cout << fixed << setprecision(6);

    cout << ans << endl;

    return 0;
}