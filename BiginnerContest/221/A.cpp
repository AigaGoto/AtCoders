#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {

    long long A, B;
    cin >> A >> B;

    long long x = 1;

    for (int i = 0; i < A- B; i++) {
        x *= 32;
    }

    cout << x << endl;

    return 0;
}