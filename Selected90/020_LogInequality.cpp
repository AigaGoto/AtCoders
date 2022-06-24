#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long a, b, c;

int main() {
    cin >> a >> b >> c;

    long long cb = 1;

    rep(i, b) {
        cb *= c;
    }

    if (a < cb) cout << "Yes" << endl;
    else cout << "No" << endl;
    

    return 0;
}