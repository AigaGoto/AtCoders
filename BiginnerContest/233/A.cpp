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


int main() {
    int X, Y;
    cin >> X >> Y;

    if (X >= Y) cout << 0 << endl;
    else {
        X = Y - X;
        if (X % 10 == 0) cout << X / 10 << endl;
        else cout << (X / 10) + 1 << endl;
    }




    return 0;
}