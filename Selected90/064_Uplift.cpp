// 階差を考える

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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long N,Q;
long long A[100009], V[100009], L[100009],R[100009], diff[100009];

int main() {

    cin >> N >> Q;
    rep(i, N) cin >> A[i];
    rep(i, Q) cin >> L[i] >> R[i] >> V[i];

    long long score = 0;

    rep(i, N-1) {
        diff[i] = A[i+1] - A[i];
        score += abs(diff[i]);
    }

    rep(i, Q) {
        long long before = abs(diff[L[i]-2]) + abs(diff[R[i] -1]);
        if(L[i] >= 2){
            diff[L[i]-2] += V[i];
        } 
        if(R[i] < N) {
            diff[R[i]-1] -= V[i];
        }
        long long after = abs(diff[L[i]-2]) + abs(diff[R[i] -1]);
        score += (after - before);

        cout << score << endl;
    }

    return 0;
}