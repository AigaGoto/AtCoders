#include <iostream>
using namespace std;

long long N, L, K;
long long A[1 << 18];

bool solve(long long M) {
    long long count = 0, pre = 0;
    for (int i = 1; i <= N; i++) {
        if (A[i] - pre >= M && L - A[i] >= M) {
            count++;
            pre = A[i];
        }
    }
    if (count >= K) return true;
    return false;
}

int main() {
    cin >> N >> L;
    cin >> K;
    for (int i = 1; i <= N; i++){
        cin >> A[i];
    }

    long long left, right;
    left = -1;
    right = L+1;

    // 二分探索の応用
    while(right - left > 1) {
        long long mid = left + (right - left) / 2;
        if (!solve(mid)) right = mid;
        else left = mid;
    }

    cout << left << endl;

    return 0;
}