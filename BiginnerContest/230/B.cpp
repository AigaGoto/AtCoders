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
    string S;
    cin >> S;

    string T = "oxxoxxoxxoxxoxxoxxoxxoxxoxx";

    int S_length = S.length();

    bool flg = false;

    rep(i, 3) {
        string subT = T.substr(i, S_length);
        if (subT == S) flg = true;
    }

    if(flg) cout << "Yes";
    else cout << "No";

    return 0;
}