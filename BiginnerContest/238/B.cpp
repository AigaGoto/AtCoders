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
    int N;
    cin >> N;

    vector<int> A;
    int inp = 0;
    int last_inp = 0;

    A.push_back(0);

    rep(i, N) {
        cin >> inp;

        last_inp += inp;
        last_inp %= 360;

        A.push_back(last_inp);
    }

    sort(A.begin(), A.end());
    A.push_back(360);

    int s, e;
    vector<int> B;

    rep(i, N+1) {
        s = A[i];
        e = A[i+1];

        B.push_back(e-s);
    }

    int ax = *max_element(B.begin(), B.end());
    cout << ax << endl;


    return 0;
}