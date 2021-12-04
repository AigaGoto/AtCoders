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
    long long N,A,B,P,Q,R,S;
    cin >> N >> A >> B >> P >> Q >> R >> S;

    long long pkl, pkr, mkl, mkr;
    pkl = max(1-A, 1-B); pkr = min(N-A, N-B);
    mkl = max(1-A, B-N); mkr = min(N-A, B-1);

    // cout << "pkl: " << pkl << endl;
    // cout << "pkr: " << pkr << endl;
    // cout << "mkl: " << mkl << endl;
    // cout << "mkr: " << mkr << endl;

    pair<long long, long long> upl, dwr, upr, dwl;

    upl = make_pair(A + pkl, B + pkl);
    dwr = make_pair(A + pkr, B + pkr);
    upr = make_pair(A + mkl, B - mkl);
    dwl = make_pair(A + mkr, B - mkr);

    // cout << "(" << upl.first << "," << upl.second <<")" << endl;
    // cout << "(" << dwr.first << "," << dwr.second <<")" << endl;
    // cout << "(" << upr.first << "," << upr.second <<")" << endl;
    // cout << "(" << dwl.first << "," << dwl.second <<")" << endl;

    bool a, b;

    // 出力部分
    for (long long i = P; i <= Q; i++) {
        for (long long j = R; j <= S; j++) {
            // 1st
            a = upl.first <= i && i <= dwr.first && upl.second <= j && j <= dwr.second;
            b = upr.first <= i && i <= dwl.first && dwl.second <= j && j <= upr.second;

            if (a || b) {
                if ((i-j == upl.first-upl.second) || (dwl.first - j == i - dwl.second)) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            } else {
                cout << ".";
            }
            // 2nd
        }
        cout << endl;
    }


    return 0;
}