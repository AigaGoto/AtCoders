// 拡張 BFS (01BFS)

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <deque>
#include <algorithm>
#include <iomanip>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const int inf = 1000000000;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int H, W;
pair<int ,int> start;
pair<int ,int> goal;
char S[1009][1009];
int costs[1009][1009][4];

struct state {
    int x, y, dir;
};

int main() {
    // 入力
    cin >> H >> W;
    cin >> start.first >> start.second;
    cin >> goal.first >> goal.second;
    start.first--; start.second--; goal.first--; goal.second--;

    rep(i, H) {
        rep(j, W) {
            cin >> S[i][j];
            rep(k, 4) {
                costs[i][j][k] = inf;
            }
        }
    }

    deque<state> que;

    rep(i, 4) {
        que.push_back({start.first, start.second, i});
        costs[start.first][start.second][i] = 0;
    }

    while(!que.empty()) {
        state now = que.front(); que.pop_front();
        rep(i, 4) {
            int nx = now.x + dx[i];
            int ny = now.y + dy[i];
            // 次進む向きが変わるなら+1する
            int cost = costs[now.x][now.y][now.dir] + (now.dir != i ? 1 : 0);
            if(0 <= nx && nx < H && 0 <= ny && ny <= W && S[nx][ny] == '.' && cost < costs[nx][ny][i]) {
                costs[nx][ny][i] = cost;
                if (now.dir != i) que.push_back({nx, ny, i});
                else que.push_front({nx, ny, i});
            }
        }
    }

    int answer = inf;
    rep(i, 4) {
        answer = min(costs[goal.first][goal.second][i], answer);
    }

    cout << answer << endl;

    return 0;
}