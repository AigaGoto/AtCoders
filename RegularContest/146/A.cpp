// 大きいカードを3枚取り出す
// あとは6通り試せば良い

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
    rep(i, N) {
        cin >> x;
        A.push_back(x);
    }

    sort(A.begin(), A.end());

    vector<string> S;

    S.push_back(to_string(A[N-3]));
    S.push_back(to_string(A[N-2]));
    S.push_back(to_string(A[N-1]));

    string ans = "0";
    string solution;

    do {
        solution = "";
        rep(i, S.size()) {
            solution += S[i];
        }
        ans = max(ans, solution);
        
    } while (next_permutation(S.begin(), S.end()));

    cout << ans << endl;

    return 0;
}