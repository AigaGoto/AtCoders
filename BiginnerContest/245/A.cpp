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

int main() {
    int A,B,C,D;
    cin >> A >> B >> C >> D;

    if(A > C) {
        cout << "Aoki" << endl;
    } else if (A == C){
        if (B > D) {
            cout << "Aoki" << endl;
        } else {
            cout << "Takahashi" << endl;
        }
    } else {
        cout << "Takahashi" << endl;
    }

    return 0;
}