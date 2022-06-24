// gcd

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long A, B, C;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);

}

int main() {
    cin >> A >> B >> C;

    long long S = gcd(A, gcd(B, C));

    cout << (A / S - 1LL) + (B / S - 1LL) + (C / S - 1LL) << endl;

    return 0;
}