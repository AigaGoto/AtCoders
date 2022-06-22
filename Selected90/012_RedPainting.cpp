// UnionFind木

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

class UnionFind {
public:
        vector<int> par;

        void init(int sz) {
            par.resize(sz, -1);
        }

        int root(int pos) {
            if (par[pos] == -1) return pos;
            par[pos] = root(par[pos]);
            return par[pos];
        }

        void unite(int u, int v) {
            u = root(u); v = root(v);
            if (u == v) return;
            par[u] = v;
        }

        bool same(int u, int v) {
            if (root(u) == root(v)) return true;
            return false;
        }
};

int H, W, Q;
int t;

bool isRed[2009][2009];

UnionFind UF;

void query1 (int r, int c) {

    isRed[r][c] = true;

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, -1, 0, 1};

    for (int i = 0; i < 4; i++) {
        int sx = r + dx[i];
        int sy = c + dy[i];

        if(!isRed[sx][sy]) continue;

        // 2次元を1次元に直している
        int hash1 = (r - 1) * W + (c - 1); 
        int hash2 = (sx - 1) * W + (sy - 1); 

        UF.unite(hash1, hash2);
    }
}

bool query2 (int ax, int ay, int bx, int by) {

    int hash1 = (ax - 1) * W + (ay - 1); 
    int hash2 = (bx - 1) * W + (by - 1); 

    if(isRed[ax][ay] && isRed[bx][by] && UF.same(hash1, hash2) ) return true;
    else return false;
}

int main() {
    cin >> H >> W >> Q;

    UF.init(H * W);

    rep(i, H) {
        rep(j, W) {
            isRed[i][j] = false;
        }
    }

    rep(i, Q) {
        cin >> t;

        if (t == 1) {
            int r, c;
            cin >> r >> c;
            query1(r, c);
        } 
        if (t == 2) {
            int ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb;
            if (query2(ra, ca, rb, cb) ) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    return 0;
}