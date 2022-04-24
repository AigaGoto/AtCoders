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
    int A, B, C, D, E,F, X;

    cin >> A >> B >> C >> D >> E >> F >> X;

    int T_all = A + C;
    int A_all = D + F;

    int T_run = X / T_all;
    int A_run = X / A_all;

    int T_a = X % T_all;
    int A_a = X % A_all;

    int T_m = A * T_run * B;
    int A_m = D * A_run * E;
    
    int T_b = A - T_a;
    int A_b = D - A_a;

    if (T_b >= 0) T_m += B * T_a; 
    else T_m += A * B;

    if (A_b >= 0) A_m += E * A_a;
    else  A_m += E * D;

    // cout << T_m << endl;
    // cout << A_m << endl;

    if (T_m > A_m) cout << "Takahashi" << endl;
    else if (T_m == A_m) cout << "Draw" << endl;
    else cout << "Aoki" << endl; 

    return 0;
}