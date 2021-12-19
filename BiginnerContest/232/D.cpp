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
typedef pair<int, int> P;

int H, W;
char maze[101][101];
int d[101][101];

int bfs() {
    queue<P> que;
    que.push(P(0,0));

    int dx[2] = {0,1} , dy[2] = {1,0};
    int nx = 0;
    int ny = 0;

    while(que.size()) {
        P p = que.front(); que.pop();
        rep(i, 2) {
            nx = p.first + dx[i];
            ny = p.second + dy[i];

            if (0 <= nx && nx < H && 0 <= ny && ny < W && maze[nx][ny] != '#' && d[nx][ny] == -1) {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }

    int ax = 0;

    rep(i, H) {
        rep(j, W) {
            ax = max(ax, d[i][j]);
        }
    }

    return ax;
}

int main() {
    cin >> H >> W;

    rep(i,H) {
        rep(j, W) {
            cin >> maze[i][j];
            d[i][j] = -1;
        }
    }

    d[0][0] = 0;

    cout << bfs() + 1 << endl;

    return 0;
}