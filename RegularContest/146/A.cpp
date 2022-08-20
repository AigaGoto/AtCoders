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

int N, x;
vector<int> A;

int main() {
    cin >> N;
    rep(i, N) cin >> x; A.push_back(x);

    sort(A.begin(), A.end());

    string s1 = to_string(A[N-1]);
    string s2 = to_string(A[N-2]);
    string s3 = to_string(A[N-3]);

    string ans;

    if (s1[0] > s2[0] && s1[0] > s3[0]) {
        ans = s1+s2+s3;
    } else if (s2[0] > s1[])

    return 0;
}