#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <bitset>

using namespace std;

string toBinary(long long n) {
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    reverse(r.begin(), r.end());
    return r;
}


#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long N, L, R;
    cin >> N >> L >> R;

    string bitN = toBinary(N);
    string bitL = toBinary(L);
    string bitR = toBinary(R);

    int len_N = bitN.length();
    int len_L = bitL.length();
    int len_R = bitR.length();

    long long total = 0;

    int start = 0;

    if (len_N >= len_R) {
        start = len_N - len_R;
    } else {
        R = pow(2, len_N) - 1;
    }

    int end = len_N - len_L + 1;

    for (int i = start; i < len_N; i++) {
        if (bitN[i] == '1') {
            if (i == start) {
                total += R - pow(2, len_N - start - 1);
            } else if(i == end) {
                total += pow(2, len_N - end - 1) - L + 1;
            }else {
                total += pow(2, len_N - i - 1);
            }
        }
        if (i > end) break;
    }
    

    total += 1;

    cout << total << endl;

    // Nの桁数以下で考える必要がある

    return 0;
}