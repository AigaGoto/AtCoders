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

int N, x, y, inp;
vector<int> p_X;
vector<int> p_Y;

int nx, ny;

int main() {
    cin >> N >> x >> y;

    nx = 0;
    ny = 0;

    rep(i, N) {
        cin >> inp;
        if (i == 0) nx += inp;
        else if (i % 2 == 0) p_X.push_back(inp);
        else p_Y.push_back(inp);
    }

    sort(p_X.begin(), p_X.end(), greater<int>() );
    sort(p_Y.begin(), p_Y.end(), greater<int>() );

    rep(i, p_X.size()) {
        if (nx <= x) nx += p_X[i];
        else nx -= p_X[i];
    }

    rep(i, p_Y.size()) {
        if (ny <= y) ny += p_Y[i];
        else ny -= p_Y[i];
    }

    if (nx == x && ny == y) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}