#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
// #include <atcoder/all>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    int count[N];
    int card;

    rep(i, N) {
        count[i] = 0;
    }

    rep(i, 4 * N -1) {
        cin >> card;
        count[card-1]++;
    }

    rep(i, N) {
        if (count[i] == 3) {
            cout << i+1 << endl;
            break;
        }
    }
    
    return 0;
}