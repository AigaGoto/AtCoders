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

long long sum[200001];

int main() {
    long long N, K;
    cin >> N >> K;

    long long A[N];

    rep(i, N) {
        cin >> A[i];
    }

    sum[0] = 0;

    rep(i, N) {
        sum[i+1] = sum[i] + A[i];
    }

    long long count = 0;

    for(long long s = 0; s < N; s++) {
        for(long long t = s; t < N; t++) {
            if (sum[t] - sum[s] == K) {
                cout << sum[s] << " : " << sum[t] << endl;
                count++;
                cout << s << " : " << t << endl;
            }
        }
        
    }

    cout << count << endl;

    return 0;
}