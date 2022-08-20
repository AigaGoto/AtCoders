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
long long K;
vector<int> countMap(100000, -1);

int next_N(int N) {
    string Ns = to_string(N);
    rep(i, Ns.length()) {
            N += (Ns[i] - '0');
    }
    N %= 100000;
    return N;
}

int main() {
    cin >> N >> K;

    long long count = 0;

    countMap[N] = count;

    while(true) {
        count++;
        
        N = next_N(N);
        if (countMap[N] != -1) break;
        else countMap[N] = count;

        if (count == K) break;
    }
    if (count==K) {
        cout << N << endl;
    } else {
        long long cycle = count - countMap[N];
        long long remainedK = K-count;
        remainedK = remainedK % cycle;

        while(true) {
            if (remainedK == 0) break;
            remainedK--;
            N = next_N(N);
        }

        // cout << "count: " << count << endl;
        cout << N << endl;
    }

    return 0;
}