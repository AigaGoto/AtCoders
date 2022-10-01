#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N;
string symbols = "0123456789ABCDEF";

int main() {
    cin >> N;

    int a0, a1;
    a0 = N / 16;
    a1 = N % 16;

    cout << symbols[a0] << symbols[a1] << endl;

    return 0;
}