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

string S;

int main() {
    cin >> S;

    int length = S.length();
    length /= 2;

    cout << S[length] << endl;

    return 0;
}