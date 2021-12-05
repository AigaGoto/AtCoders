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
    string A,B;

    cin >> A >> B;

    long num_B;

    num_B = stoi(B);
    if (num_B % 2 == 0) {
        num_B /= 2;
    } else {
        num_B *= 5;
    }

    B = to_string(num_B);

    cout << A << "0" << B;
    return 0;
}