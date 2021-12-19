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
    string S, T;
    int num = 0;
    bool flag = false;

    cin >> S >> T;

    if (S == T || S.length() == 0) cout << "Yes" << endl;
    else {
        rep(i, 26) {
            rep(j, S.length()) {
                num = S[j] - '0';
                num++;
                if (num > 74) num = 49;
                S[j] = num + '0';
            }
            if (S == T) flag = true;
        }
        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}