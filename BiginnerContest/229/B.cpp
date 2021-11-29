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
    string A, B, C;
    cin >> A >> B;

    int digit_a = A.length();
    int digit_b = B.length();

    int digit = min(digit_a, digit_b);

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    bool flg = true;

    rep(i, digit) {
        int a = A[i] - '0';
        int b = B[i] - '0';

        if ((a+b) / 10 != 0) {
            flg = false;
            break;
        }
    }

    if(flg) cout << "Easy" << endl;
    else cout << "Hard" << endl;

    return 0;
}