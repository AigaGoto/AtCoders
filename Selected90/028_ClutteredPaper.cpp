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

int table[1009][1009];
// int lx[10009], ly[10009], rx[10009], ry[10009]; 
int lx, ly, rx, ry;

int Answer[1 << 18];

int main() {
    cin >> N;

    rep(i, N) {
        // cin >> lx[i] >> ly[i] >> rx[i] >> ry[i];
        cin >> lx >> ly >> rx >> ry;

        table[lx][ly] += 1;
        table[lx][ry] -= 1;
        table[rx][ly] -= 1;
        table[rx][ry] += 1;
    }

    for (int i = 0; i <= 1000; i++) {
        for (int j = 1; j <= 1000; j++) table[i][j] += table[i][j-1];
    }

    for (int i = 1; i <= 1000; i++) {
        for (int j = 0; j <= 1000; j++) table[i][j] += table[i-1][j];
    }

    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= 1000; j++) {
            if (table[i][j] >= 1) Answer[table[i][j]] += 1;
        }
    }

    for(int i = 1; i <= N; i++) cout << Answer[i] << endl;

    return 0;
}