#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, X;
    cin >> N >> X;

    int A[N];
    bool know[N];

    rep (i, N) {
        cin >> A[i];
        know[i] = false;
    }

    int next = X-1;
    know[X-1] = true;

    while(true) {
        next = A[next] - 1;
        if (know[next]) break;
        else know[next] = true;
    }

    int count = 0;

    rep (i, N) {
        if (know[i]) count++;
    }

    cout << count <<

    return 0;
}