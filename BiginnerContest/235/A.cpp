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
    string X;
    string a, b, c;

    cin >> X;

    a = X.substr(0,1);
    b = X.substr(1,1);
    c = X.substr(2,1);

    string x = a+b+c;
    string y = b+c+a;
    string z = c+a+b;

    cout << (stoi(x) + stoi(y) + stoi(z)) << endl;

    return 0;
}