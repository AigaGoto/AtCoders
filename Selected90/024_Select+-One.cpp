// なんでダメなのかわからない

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

int N;
long long K;
long long A, B;

int main() {
    cin >> N >> K;

    long long total = 0;

    rep(i, N) {
        cin >> A >> B;
        total += abs(A - B);
    }

    if (total > K) {
        cout << "No" << endl;
        return 0;
    }
    
    if (K % 2 != total % 2) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}


// #include <iostream>
// #include <cmath>
// using namespace std;

// long long N, K;
// long long A[1 << 18], B[1 << 18];

// int main() {
// 	// Step #1. Input
// 	cin >> N >> K;
// 	for (int i = 1; i <= N; i++) cin >> A[i];
// 	for (int i = 1; i <= N; i++) cin >> B[i];

// 	// Step #2. Check Difference
// 	long long Diff = 0;
// 	for (int i = 1; i <= N; i++) Diff += abs(A[i] - B[i]);
// 	if (Diff > K) {
// 		cout << "No" << endl;
// 		return 0;
// 	}

// 	// Step #3. Check Parity
// 	if (Diff % 2 != K % 2) {
// 		cout << "No" << endl;
// 		return 0;
// 	}

// 	// Step #4. Output Yes
// 	cout << "Yes" << endl;
// 	return 0;
// }

