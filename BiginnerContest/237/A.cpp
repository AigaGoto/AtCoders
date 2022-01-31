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
    long long low, high;
    low = -pow(2, 31);
    high = pow(2, 31);

    long long N;
    cin >> N;

    if(low <= N && N < high) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}