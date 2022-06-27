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

int K, N, Q;

int L;

int A[209];

int main() {
    cin >> N >> K >> Q;

    for (int i = 1; i <= K; i++) {
        cin >> A[i];
    }


    for (int i = 1; i <= Q; i++) {
        cin >> L;
        if(A[L] == N) continue;
        if(A[L+1] - A[L] == 1) continue;
        A[L] += 1;
    }

    for(int i = 1; i <= K; i++) cout << A[i] << " ";

    return 0;
}