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
    string X;
    cin >> X;

    int len = X.size();

    char first = X[0];
    char last = X[len-1];

    if (len == 1) {
        cout << "0" << endl;
    } else if (len == 2 && first == '-') {
        cout << "-1" << endl;
    } else if (last - '0' == 0 || first != '-'){
        rep(i, len-1){
            cout << X[i];
        }
        cout << endl;
    } else {
        long long llX = stoll(X);
        llX /= 10;
        llX -= 1 ;
        X = to_string(llX);
        rep(i, len-1){
            cout << X[i];
        }
        cout << endl;
    }

    return 0;
}