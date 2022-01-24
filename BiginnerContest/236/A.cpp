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

    int a, b;
    cin >> a >> b;

    char alt;

    alt = S[a-1];
    S[a-1] = S[b-1];
    S[b-1] = alt;

    cout << S << endl;

    return 0;
}