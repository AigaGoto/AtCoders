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
    char S[3];

    rep(i, 3) cin >> S[i];

    cout << (S[0] - '0') * (S[2] - '0') << endl;

    return 0;
}