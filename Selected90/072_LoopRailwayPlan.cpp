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
char[20][20];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
bool used[20][20];

int dfs (int sx, int sy, int px, int py) {
    if (sx == px && sy == py && used[px][py] == true) return 0;
    used[px][py] = true;

    int ret = -100000;

    rep(i , 4) {
        int nx = px + dx[i];
        int ny = px + dy[i];
        if (nx < 0 || ny < 0 || H-1 < nx || W-1 < ny || c[nx][ny] == '#') continue;
        if ((sx != nx || sy != ny) && used[nx][ny] == true) continue;
        int v = dfs(sx, sy, nx, ny);
        ret = max(ret, v + 1);
    }
    used[px][py] = false;
    return ret;
}

int main() {
    cin >> H >> W;

    rep(i, H) {
        rep(j, W) {
            cin >> c[i][j];
        }
    }

    int Ans = -1;

    rep(i, H) {
        rep(j, W) {
            Ans = max(Ans, dfs(i,j,i,j));
        }
    }

    if (Ans <= 2) Ans = -1;
    cout << Ans << endl;

    return 0;
}