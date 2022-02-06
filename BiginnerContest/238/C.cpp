#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
// #include <atcoder/all>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long x = 998244353

// unsigned long long digit[18] = {45, 
//                                 4095, 
//                                 405450, 
//                                 40504500, 
//                                 4050045000,
//                                 405000450000,
                                    

long long digit_per[18] = {
0,
45,
4095,
405450,
40504500,
57067588,
711487035,
232854437,
919067934,
11290336,
558807720,
266295550,
552541943,
122400448,
972301253,
524599478,
794761281,
55289524,
};

long long calc_sum(long long start, long long end) {
    long long sum = 0;
    for (long long i = start; i <= end; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    long long N;
    cin >> N;

    string Ns = to_string(N);

    int digit = Ns.size();

    long long ans = digit_per[digit-1];

    return 0;
}