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

typedef long double ld;

ld T,L,X,Y;
int Q;
ld E;

ld PI = 3.14159265358979;

ld query(ld I) {
    ld half_L = L / 2.0;
    ld rad = I / T * 2.0 * PI;

    ld cx = 0;
    ld cy = -half_L * sin(rad);
    ld cz = half_L - half_L * cos(rad);

    ld d1 = sqrt(pow(cx - X, 2) + pow(cy - Y, 2));
    ld d2 = cz;

    ld theta = atan2(d2, d1);

    return theta * 180.0L / PI;
}

int main() {
    cin >> T >> L >> X >> Y >> Q;

    cout << fixed << setprecision(12);

    for (int i = 0; i < Q; i++) {
        cin >> E;
        cout << query(E) << endl;
    }

    return 0;
}