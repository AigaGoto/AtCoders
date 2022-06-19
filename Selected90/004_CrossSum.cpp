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

int H, W;
int A[2009][2009];

int vert[2009];
int hori[2009];

int main() {
    cin >> H >> W;

    rep(i, H) {rep(j, W) { cin >> A[i][j]; }}

    rep(i, H) {
        int total = 0;
        rep(j ,W) {
            total += A[i][j];
        }
        hori[i] = total;
    }

    rep(i, W) {
        int total = 0;
        rep(j, H) {
            total += A[j][i];
        }
        vert[i] = total;
    }

    rep(i, H) {
        rep(j, W) {
            cout << hori[i] + vert[j] - A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}