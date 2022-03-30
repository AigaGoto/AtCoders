#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>
// #include <atcoder/all>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    rep(i, N) cin >> A[i];

    sort(A.begin(), A.end());

    int count = 0;

    rep(i, N) {
        if (A[i] == count) count++;
        if (A[i] > count) break;
    }

    cout << count << endl;

    return 0;
}