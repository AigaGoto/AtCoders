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
    int N;
    cin >> N;

    cout << "AGC0";

    if (N >= 42) cout << N+1;
    else if (N <= 9) cout << "0" << N;
    else cout << N;

    cout << endl;

    return 0;
}