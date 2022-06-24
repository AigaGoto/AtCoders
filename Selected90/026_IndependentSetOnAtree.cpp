// 2部グラフの性質

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
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)

int N;

vector<int> G[1 << 18];

int color[1 << 18];

void dfs(int root, int cur) {
    color[root] = cur;
    for(int p : G[root]) {
        if (color[p] >= 1) continue;
        dfs(p, 3 - cur);
    }
}

int main() {
    int A, B;
    
    cin >> N;

    rep(i, N) {
        cin >> A >> B;
        G[A].push_back(B);
        G[B].push_back(A);
    }

    dfs(1, 1);

    vector<int> G1, G2;
    rep(i, N) {
        if (color[i] == 1) G1.push_back(i);
        if (color[i] == 2) G2.push_back(i);
    }

    if (G1.size() < G2.size()) {
        for (int i = 0; i < (N / 2); i++) {
            if (i) cout << " ";
            cout << G2[i];
        }
        cout << endl;
    }
    else {
        for (int i = 0; i < (N / 2); i++) {
            if (i) cout << " ";
            cout << G1[i];
        }
        cout << endl;
    }

    return 0;
}