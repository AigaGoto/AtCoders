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

long N;
vector<long> A;
long inp;

int main() {
    cin >> N;

    rep(i, N) {
        cin >> inp;
        A.push_back(inp);
    }

    sort(A.begin(), A.end());

    int index = 0, max_index = N-1;
    int ans = 0;

    while(index <= max_index) {
        // cout << "------------" << endl;
        // cout << A[index] << endl;
        if (A[index] == ans + 1) {
            ans++;
            // cout << "OK: " << ans << endl;
            index++;
        } else {
            if (max_index - index >= 1) {
                max_index -= 2;
                ans++;
            } else {
                break;
            }
            // cout << "No: " << ans << endl;
        }
    }

    cout << ans << endl;

    return 0;
}