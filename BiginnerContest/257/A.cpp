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
int X;

int main() {
    cin >> N >> X;

    string S = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int index = X / N;
    int par = X % N;

    if (par == 0) index--;

    cout << S[index] << endl;

    return 0;
}