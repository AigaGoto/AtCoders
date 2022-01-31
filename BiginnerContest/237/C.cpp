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
    string S;
    cin >> S;


    reverse(S.begin(), S.end());

    long index = 0;

    rep(i, S.size()) {
        if (S[i] == 'a') continue;
        else {
            index = i;
            break;
        }
    }

    reverse(S.begin(), S.end());

    long index_f = 0;

    rep(i, S.size()) {
        if (S[i] == 'a' && i < index) continue;
        else {
            index_f = i;
            break;
        }
    }

    reverse(S.begin(), S.end());

    string subS = S.substr(index, S.size() - index - index_f);
    string retsubS = subS;
    reverse(retsubS.begin(), retsubS.end());

    // cout << subS << endl;
    // cout << retsubS << endl;

    if (subS == retsubS) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}