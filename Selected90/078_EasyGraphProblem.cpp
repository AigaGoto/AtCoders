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

int N, M;

int main() {
    cin >> N >> M;

    vector<vector<int>> graph(N+1);

    int a, b;

    rep(i, M) {
        cin >> a >> b;
        if (a < b) {
            graph.at(b).push_back(a);
        } else {
            graph.at(a).push_back(b);
        }
    }

    int ans = 0;

    for(int i = 1; i <= N; i++) {
        if (graph[i].size() == 1) ans++;
    }

    cout << ans << endl;

    return 0;
}