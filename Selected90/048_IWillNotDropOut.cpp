// 部分点が半分以上であることを利用

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

int N, K;
vector<long> A,B,C;
long inp;

int main() {
    cin >> N >> K;
    rep(i, N) {
        cin >> inp;
        A.push_back(inp);
        cin >> inp;
        B.push_back(inp);
        C.push_back(B[i]);
        C.push_back(A[i] - B[i]);
    }

    sort(C.begin(), C.end(),greater<int>());

    long long sum = 0;

    rep(i, K) {
        sum += C[i];
    }

    cout << sum << endl;

    return 0;
}