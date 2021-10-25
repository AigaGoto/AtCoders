#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <float.h>
#include <set>
#include <algorithm>

using namespace std;

int 

int main() {
    int M;
    cin >> M;

    bool p[9];

    int matrix[9][9];
    int u, v;
    int empty_v;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < M; i++) {
        cin >> u >> v;
        matrix[u-1][v-1] = 1;
        matrix[v-1][u-1] = 1;
    }

    for (int i = 0; i < 9; i++) {
        p[i] = false;
    }

    for (int i = 0; i < 8; i++) {
        cin >> u;
        p[u-1] = true;
    }

    for (int i = 0; i < 9; i++) {
        p[i] = false;
    }

    for (int i = 0; i < 9; i++) {
        if (!p[i]) empty_v = i;
    }

    if (empty_v == 8) cout << 0 << endl;
    else {

    }
    
    return 0;
}