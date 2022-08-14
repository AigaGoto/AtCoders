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
long x;
vector<int> am(46),bm(46),cm(46);

int main() {
    cin >> N;

    rep(i, N) {
        cin >> x;
        am[x % 46]++;
    }
    rep(i, N) {
        cin >> x;
        bm[x % 46]++;
    }
    rep(i, N) {
        cin >> x;
        cm[x % 46]++;
    }

    long long all_count = 0;

    rep(i, 46) {
        rep(j, 46) {
            rep(k, 46) {
                if ((i + j + k) % 46 == 0) {
                    all_count += (long long )(am[i]) * bm[j] * cm[k]; 
                }
            }
        }
    }

    cout << all_count << endl;

    return 0;
}