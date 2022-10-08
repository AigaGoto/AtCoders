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

int N, M;

bool meet[105][105];

int main() {
    cin >> N >> M;

    for (int i = 1; i <= N ; i++) {
        for (int j = 1; j <= N; j++) {
            meet[i][j] = false;
        }
    }

    int participantsN;
    int person[105];

    rep(i, M) {
        cin >> participantsN;
        rep(j, participantsN) cin >> person[j];
        rep(j, participantsN) {
            for (int k = 0; k < participantsN; k++) {
                meet[person[j]][person[k]] = true;
                meet[person[k]][person[j]] = true;
            }
        }
    }

    bool flag = true;

    for (int i = 1; i <= N ; i++) {
        for (int j = 1; j <= N; j++) {
            if (meet[i][j] == false) {
                flag = false;
                break;
            }
        }
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}