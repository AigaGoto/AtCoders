#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>

using namespace std;

int main() {
    int S,T,X;
    cin >> S >> T >> X;

    if (S < T) {
        if (S <= X && X < T) cout << "Yes" << endl;
        else cout << "No" << endl;
    } else {
        if (X < S && T <= X) cout << "No" << endl;
        else cout << "Yes" << endl;
    }

    return 0;
}