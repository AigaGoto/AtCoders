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

int N, Q, T, x, y, add_i;
long A[200009];

// 入れ替え
void swap_A(int i, int j) {
    int tmp = A[i];
    A[i] = A[j];
    A[j] = tmp;
}

// インデックスの更新
// 配列のインデックスをはみ出した時、0からにする
int update_i(int i) {
    i -= add_i;
    if (i < 0) i += N;
    // cout << "index: " << i << endl; 
    return i;
}

void print() {
    int x;
    rep(i, N) {
        x = update_i(i);
        cout << A[x] << " ";
    }
    cout << endl;
}

int main() {
    cin >> N >> Q;
    rep(i, N) cin >> A[i];

    add_i = 0;

    rep(i, Q) {
        cin >> T >> x >> y;

        x -= 1;
        y -= 1;

        if (T == 1) {
            x = update_i(x);
            y = update_i(y);
            swap_A(x, y);
            // print();
        } else if (T == 2) {
            add_i++;
            // print();
        } else if (T == 3) {
            x = update_i(x);
            cout << A[x] << endl;
        }
    }

    return 0;
}