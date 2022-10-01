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


int main() {
    int N, Q;
    cin >> N >> Q;

    vector<vector<long>> sequences(N);

    long L;
    long inp;

    rep(i, N) {
        cin >> L;
        rep(j , L) {
            cin >> inp;
            sequences.at(i).push_back(inp);
        }
    }


    long x, y;

    rep(i, Q) {
        cin >> x >> y;
        x--; y--;
        cout << sequences[x][y] << endl;
    }

    return 0;
}