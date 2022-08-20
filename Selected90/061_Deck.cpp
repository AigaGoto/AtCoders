// デキューの実装
/*
配列を大きめに取り、真ん中からスタートする
配列として、管理する左端と右端を決める（cl, cr）
前に入れたい時は、cl--して配列のcl番目に代入
・・・・
*/

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

int Q, t, x;
int deck[200007];

int main() {
    cin >> Q;

    int cl = 1e5;
    int cr = 1e5;

    rep(i, Q) {
        cin >> t >> x;

        if(t == 1) {
            cl--;
            deck[cl] = x;
        }
        if(t == 2) {
            deck[cr] = x;
            cr++;
        }
        if(t == 3) {
            cout << deck[cl+x-1] << endl;
        }
    }

    return 0;
}