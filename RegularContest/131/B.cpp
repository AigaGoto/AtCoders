#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int H, W;

char canvas[700][700];


int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

char check_number(int x, int y) {
    int return_num = 1;
    bool can_draw[5] = {true, true, true, true, true};
    rep(i, 4) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (0 <= nx && nx < H && 0 <= ny && ny < W && canvas[nx][ny] != '.') {
            int num = canvas[nx][ny] - '0';
            can_draw[num - 1] = false;
        }
    }
    for(int i = 0; i < 5; i++) {
        if (can_draw[i]) {
            return_num = i+1;
            break;
        }
    }
    string tmp = to_string(return_num);
    const char *c = tmp.c_str();
    return c[0];
}

int main() {
    cin >> H >> W;

    char c;

    rep(i,H) {
        rep(j, W) {
            cin >> c;
            canvas[i][j] = c;
        }
    }

    for (int i = 0; i < H; i+=2) {
        for (int j = 0; j < W; j+=2) {
            if (canvas[i][j] != '.') continue;
            char color = check_number(i,j);
            canvas[i][j] = color;
        }
    }

    for (int i = 1; i < H; i+=2) {
        for (int j = 1; j < W; j+=2) {
            if (canvas[i][j] != '.') continue;
            char color = check_number(i,j);
            canvas[i][j] = color;
        }
    }

    for (int i = 0; i < H; i+=2) {
        for (int j = 1; j < W; j+=2) {
            if (canvas[i][j] != '.') continue;
            char color = check_number(i,j);
            canvas[i][j] = color;
        }
    }

    for (int i = 1; i < H; i+=2) {
        for (int j = 0; j < W; j+=2) {
            if (canvas[i][j] != '.') continue;
            char color = check_number(i,j);
            canvas[i][j] = color;
        }
    }

    rep(i, H) {
        rep(j, W) {
            cout << canvas[i][j];
        }
        cout << endl;
    }

    return 0;
}