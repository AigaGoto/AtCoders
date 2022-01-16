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
    long long N;
    cin >> N;

    long long maxmax = 0;
    long long inp;

    rep(i, N) {
        cin >> inp;
        if (inp > maxmax) maxmax = inp;
        else break;
    }

    cout << maxmax << endl;

    return 0;
}