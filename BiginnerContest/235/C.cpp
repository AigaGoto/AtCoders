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

map<long long, vector<long long>> ap;

int main() {
    long long N, Q;
    cin >> N >> Q;

    long long a;
    long long x, k;

    rep(i, N) {
        cin >> a;
        if(!ap.at(a).empty()) {
            ap.at(a).push_back(i+1);
        } else {
            ap.insert(make_pair(a, i+1));
        }
    }

    rep(i, Q) {
        cin >> x >> k;
        if (ap.at(x).size() >= k) {
            cout << ap[x][k-1] << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}