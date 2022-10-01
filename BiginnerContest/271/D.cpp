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

int N, S;

int dp[105][10005];
int A[105], B[105];

int main() {
    cin >> N >> S;

    // DPの初期化
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= S; j++) {
            dp[i][j] = 0;
        }
    }

    dp[0][0] = 1;

    // 入力
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < S; j++) {
            if (dp[i][j]) {
                if (j + A[i] <= S) dp[i+1][j+A[i]] = 1;
                if (j + B[i] <= S) dp[i+1][j+B[i]] = 1;
            }
        }
    }

    if (dp[N][S] == 1) {
        cout << "Yes" << endl;

        string output = "";

        for (int i = N-1; i >= 0; i--) {
            if (dp[i][S-A[i]] == 1) {
                output = "H" + output;
                S = S - A[i];
            }
            else {
                output = "T" + output;
                S = S - B[i];
            }
        }

        cout << output << endl;

    } else {
        cout << "No" << endl;
    }

    return 0;
}