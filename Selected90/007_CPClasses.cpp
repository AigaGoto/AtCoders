// ソートとlower_bound

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

const long long INF = 200000000000;

int N, Q;

vector<long long> A;
long long B;

int main() {
    cin >> N;
    rep(i, N) {
        int x;
        cin >> x;
        A.push_back(x);
    }

    sort(A.begin(), A.end());

    cin >> Q;
    rep(i, Q) {
        cin >> B;

        int index = upper_bound(A.begin(), A.end(), B) - A.begin();

        long long ans1,ans2 = INF;

        if(index <= N) ans1 = abs(B - A[index]);
        if(index >= 1)ans2 = abs(B - A[index-1]);

        long long ans = min(ans1, ans2);

        cout << ans << endl;
    }



    return 0;
}