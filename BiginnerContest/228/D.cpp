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

int main() {
    int Q;
    cin >> Q;

    long long t, x, h;

    map<long, long> hash;

    long long N = pow(2, 20);

    rep(i, Q) {
        cin >> t >> x;
        if (t == 1) {
            h = x;
            while(true) {
                // 見つかった時
                if (hash.find(h % N) != hash.end()) {
                    h += 1;
                } else {
                    hash.insert(make_pair(h % N, x));
                    break;
                }
            }
        } else if (t == 2) {
            auto itr = hash.find(x % N);
            if (itr == hash.end()) {
                cout << -1 << endl;
            } else {
                cout << itr->second << endl;
            }
        }
    }

    // for (const auto &item : hash) {
    //     cout << item.first << " " << item.second << endl;
    // }

    return 0;
}