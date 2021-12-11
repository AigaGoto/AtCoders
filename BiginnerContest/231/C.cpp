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
    long long N, Q, x;
    cin >> N >> Q;

    vector<long long> A;

    rep(i, N) {
        cin >> x;
        A.push_back(x);
    } 

    auto p = lower_bound(A.begin(), A.end(), 1);
    long long index = 0;

    sort(A.begin(), A.end());

    rep(i, Q) {
        cin >> x;
        p = lower_bound(A.begin(), A.end(), x);
        index = distance(A.begin(), p);
        cout << N - index << endl;
    }


    return 0;
}