#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>
// #include <atcoder/all>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<int> prime{2,3,5,7,11,13,17,19,23,29,31,
                    37,41,43,47,53,59,61,67,71,73,79,
                    83,89,97,101,103,107,109,113,127,131,137,
                    139,149,151,157,163,167,173,179,181,191,193,197,199};

int main() {
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    bool flg = false;
    bool semi_flg = false;

    for (int i = A; i <= B; i++){
        for (int j = C; j <= D; j++){
            for(auto k : prime) {
                if (i + j == k) semi_flg = true;
            }
        }
        if(!semi_flg) {
            flg = true;
            break;
        } else {
            semi_flg = false;
        }
    }

    if (flg) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;

    return 0;
}