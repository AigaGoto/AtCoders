// 最大公倍数

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <numeric>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long A, B;

const long long large = 1000000000000000000;

int main() {
    cin >> A >> B;

    long long r = B / gcd(A, B);
    if (r > large / A) cout << "Large" << endl;
    else cout << r * A << endl;

    return 0;
}