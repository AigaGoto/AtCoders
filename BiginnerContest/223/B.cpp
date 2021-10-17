#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

string shift(string S, int len) {
    char S0 = S[0];
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            S[i] = S0;
            break;
        }
        S[i] = S[i+1];
    }

    return S;
}

int main() {

    string S;
    cin >> S;

    string Smax = S, Smin = S;

    for (int i = 0; i < S.length(); i++) {
        S = shift(S, S.length());
        if (S.compare(Smax) > 0) Smax = S;
        if (S.compare(Smin) < 0) Smin = S;
    }

    cout << Smin << endl << Smax << endl;

    return 0;
}