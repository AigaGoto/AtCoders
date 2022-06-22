// ループの数を減らす

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long A,B,C,N;

int main() {
    cin >> N >> A >> B >> C;

    int minpay = 10000;

    int total_pay = 9999;
    for (int i = 0; i < total_pay; i++) {
        for (int j = 0; i+j < total_pay; j++) {
            int k = (N - A*i - B*j) / C;
            if ((N - A*i - B*j) % C == 0 && k >= 0) minpay = min(minpay, i+j+k);
        }
    }

    cout << minpay << endl;

    return 0;
}