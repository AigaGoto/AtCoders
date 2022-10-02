#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>

using namespace std;
using ll=long long ;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

ll N;

vector<ll> prime_factorize(ll N) {
    vector<ll> res;
    for (ll a = 2; a*a <= N; a++) {
        if (N % a != 0) continue;

        // 割れるかぎる続ける
        while (N % a == 0) {
            N /= a;
            res.push_back(a);
        }

    }
    if (N != 1) res.push_back(N);
    return res;
}

int main() {
    cin >> N;

    vector<ll> factorial = prime_factorize(N);

    int binary = 1;
    int magicN = 0;

    while(true) {
        if (factorial.size() <= binary) break;
        magicN++;
        binary *= 2;
    }

    cout << magicN << endl;

    return 0;
}