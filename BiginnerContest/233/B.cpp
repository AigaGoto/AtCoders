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
    long L, R;
    string S;

    cin >> L >> R >> S;

    L--;

    reverse(S.begin()+L, S.begin() + R);

    cout << S << endl;

    return 0;
}