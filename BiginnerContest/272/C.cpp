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
long inp;
vector<long> A;

int main() {
    cin >> N;
    rep (i , N) {
        cin >> inp;
        A.push_back(inp);
    }

    if (N == 2) {
        if ((A[0] + A[1]) % 2 == 0) {
            cout << A[0] + A[1] << endl;
        } else {
            cout << -1 << endl;
        }

        return 0;
    }

    sort(A.begin(), A.end());

    if ((A[N-1] + A[N-2]) % 2 == 0) cout << A[N-1] + A[N-2] << endl;
    else if ((A[N-1] + A[N-3]) % 2 == 0) cout << A[N-1] + A[N-3] << endl;
    else if ((A[N-2] + A[N-3]) % 2 == 0) cout << A[N-2] + A[N-3] << endl;
    else cout << -1 << endl;


    return 0;
}