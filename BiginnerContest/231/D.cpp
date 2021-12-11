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

struct UnionFind {
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};



int main() {
    long long N, M, A, B;

    cin >> N >> M;

    UnionFind uf(N);
    int counter[N];

    bool flag = true;

    rep(i, N) counter[i] = 0;

    rep(i, M) {
        cin >> A >> B;
        A--;
        B--;
        counter[A]++; 
        counter[B]++;
        // cout << counter[A-1] << " : " << counter[B-1] << endl;
        if (counter[A] > 2 || counter[B] > 2) {
            // cout << i << " over" << endl;
            flag = false;
            break;
        }
        if (uf.root(A) == uf.root(B)) {
            flag = false;
        }
        uf.unite(A,B);
    }

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}