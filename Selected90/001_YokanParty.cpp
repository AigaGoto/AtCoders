// 二分探索 + 貪欲法

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

long long N, K, L;

long long A[100001];

long long greedy (long long div) {
    long long count = 0;
    long long left = 0;
    rep(i, N) {
        if (A[i] - left >= div && L - A[i] >= div) {
            left = A[i];
            count++;
        }
    }

    return count;
}
 
int main() {
    cin >> N >> L >> K;

    rep(i, N) cin >> A[i];

    long long left, right;
    left = -1;
    right = L+1;

    long long count= 0;
    long long max_div = 0;

    while(right - left > 1) {
        long long mid = left + (right - left) / 2;
        count = greedy(mid);
        if (count < K) {
            right = mid;
        } else {
            left = mid;
            if (max_div < mid) max_div = mid;
        }
    }

    cout << max_div << endl;

    return 0;
}