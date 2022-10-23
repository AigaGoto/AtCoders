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

int H, W;
char C[1009][1009];
int j_box[1009];

int main() {
    cin >> H >> W;

    rep(i, W) j_box[i] = 0;

    rep (i, H) {
        rep (j, W) {
            cin >> C[i][j];
            if (C[i][j] == '#') j_box[j]++;
        }
    }

    rep(i, W) cout << j_box[i] << " ";

    return 0;
}