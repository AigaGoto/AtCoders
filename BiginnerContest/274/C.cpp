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
int A[1000009];
int ameba[1000009];

int main() {
    cin >> N;
    ameba[1] = 0;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {
        int k = ameba[A[i]];
        ameba[2*i] = k+1;
        ameba[2*i+1] = k+1;
    }

    for (int i = 1; i <= 2*N+1; i++) {
        cout << ameba[i] << endl;
    }

    return 0;
}