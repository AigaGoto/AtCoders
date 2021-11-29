#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long N, W;
    cin >> N >> W;
    vector<long long> A, B, C;

    long long a, b, count;
    count = 0;

    rep(i, N){
        cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
    } 
    
    rep(i, N) {
        rep(j, B[i]) {
            count++;
            C.push_back(A[i]);
        }
    }

    


    return 0;
}