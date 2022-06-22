// ソート & 貪欲法

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

int N;
// vector<long long> A(100009), B(100009);
long long A[100009], B[100009];

int main() {
    cin >> N;

    rep(i, N) {
        cin >> A[i];
    }
    rep(i, N) {
        cin >> B[i];
    }
    
    sort(A, A+N);
    sort(B, B+N);

    long long total = 0;

    rep(i, N) {
        
        total += abs(A[i] - B[i]);
    }

    cout << total << endl;

    return 0;
}