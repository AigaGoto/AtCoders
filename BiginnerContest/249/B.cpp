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

    string S;
    cin >> S;

    bool big = false;
    bool small = false;
    bool different = true;

    if (S.length() > 54) cout << "No" << endl;
    else {
        rep(i, S.length()) {
            rep(j, S.length()) {
                if (i == j) continue;
                if (S[i] == S[j]) different = false;
            }
            if (0 <= S[i] - 'a' && S[i] - 'a' <= 25) small = true;
            else big = true;
        }
        if (big && small && different) cout << "Yes" << endl;
        else cout << "No" << endl;
    }



    return 0;
}