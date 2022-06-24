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
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)

int N;
map<string, int> Map;

int main() {
    cin >> N;

    string S;

    rep(i, N) {
        cin >> S;
        if (Map[S] == 0) {
            cout << i << endl;
            Map[S] = 1;
        }
    }

    return 0;
}