#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long N, W;
    cin >> N >> W;
    vector<long long> A, B, C;

    long long a, b, count;
    count = 0;

    rep(i, N){
        cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
    } 
    
    rep(i, N) {
        rep(j, B[i]) {
            count++;
            C.push_back(A[i]);
        }
    }

    long long dp[count+1][W+1];

    rep(i, count+1) {
        rep(j, W+1) {
            dp[i][j] = 0;
        }
    }

    rep(i, count) {
        rep(j, W+1) {
            if (j < 1) dp[i+1][j] = dp[i][j];
            else dp[i+1][j] = max(dp[i][j], dp[i][j-1] + C[i]);
        }
    }

    cout << dp[count][W] << endl;


    return 0;
}