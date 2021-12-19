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


int main() {
    int M, N;
    cin >> N >> M;

    int T[N][N], A[N][N];
    bool flag = true;

    vector<int> v;

    rep(i, 8) {
        v.push_back(i);
    }

    rep (i, N) {
        rep (j, N) {
            T[i][j] = 0;
            A[i][j] = 0;
        }
    }

    int a, b;

    rep (i, M) {
        cin >> a >> b;
        a--; b--;
        T[a][b] = 1;
        T[b][a] = 1;
    }

    rep (i, M) {
        cin >> a >> b;
        a--; b--;
        A[a][b] = 1;
        A[b][a] = 1;
    }

    // rep(i, N) {
    //     rep(j ,N) {
    //         cout << A[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << endl;

    // rep(i, N) {
    //     rep(j ,N) {
    //         cout << T[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    do {
        flag = true;
        for(int i = 0; i < N; i++) {
            rep(j, N) {
                if (!(A[v[i]][v[j]] == T[i][j])){
                    // cout << A[v[i]][j] << " " << T[i][j] << endl;
                    // cout << i << " : " << j << endl;
                    flag = false;
                    break;
                }
            }
            if (!flag) break;
        }
        if (flag) {
            break;
        }
    } while (next_permutation(v.begin(), v.end() - (8-N)));

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}