#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <functional>
// #include <atcoder/all>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

int main() {

    int N, K;
    cin >> N >> K;

    int count[26];
    rep(i, 26) count[i] = 0;

    int ans = 0;
    int ans_max = 0;

    string S[N];

    rep(i, N) cin >> S[i];

    foreach_comb(N, K, [](int *indexes) {
        for(auto i : indexes) {
            rep(j, S[i].length()) {
                count[S[i][j] - 'a']++;
            }
        }

        rep(i, 26) {
            if (count[i] == K) ans++;
        }
        if ( ans > ans_max) ans_max = ans;
    });



    cout << ans_max << endl;

    return 0;
}