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
long long W;

vector<long long> adult, child;

string S;

int main() {
    cin >> N >> S;

    rep(i, N) {
        cin >> W;
        if (S[i] == 0) child.push_back(W);
        else adult.push_back(W);
    }

    sort(child.begin(), child.end());
    sort(adult.begin(), adult.end());

    

    return 0;
}