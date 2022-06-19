// bit全探索 & かっこの条件判定

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
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)

int N;
int A[1<<18], B[1<<18];

vector<int> G[1<<18];
const int INF = 1 << 29;

int dist[1<<18];

void calc_dist(int root) {

    rep(i, N) dist[i] = INF;

    queue<int> que;
    que.push(root);
    dist[root] =0;

    while(!que.empty()) {
        int p = que.front(); que.pop();
        for (int to : G[p]) {
            if (dist[to] == INF) {
                dist[to] = dist[p] + 1;
                que.push(to);
            }
        }
    }
}

int search_far_point(bool search_point) {
    int far = 0;
    int far_point = 0;
    rep(i, N) {
        if (dist[i] > far) {
            far = dist[i];
            far_point = i;
        }
    }

    if (search_point) return far_point;
    else return far;
}

int  main() {
    cin >> N;

    rep(i, N-1) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    calc_dist(1);

    int far_point = search_far_point(true);


    calc_dist(far_point);

    cout << search_far_point(false) + 1 << endl;

    return 0;
}