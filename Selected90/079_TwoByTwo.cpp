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
int A[100009], B[100009];

int main() {
    cin >> H >> W;

    rep(i, H) {
        rep(j, W) {
            cin >> A[i];
        }
    }

    rep(i, H) {
        rep(j, W) {
            cin >> B[i];
        }
    }

    return 0;
}