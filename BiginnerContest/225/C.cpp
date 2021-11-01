#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <iterator>

using namespace std;

int main() {
    long long N,M;
    cin >> N >> M;

    long long B[N][M];
    int key = 0;

    bool flag = true;

    for (long long i = 0 ; i < N; i++) {
        for (long long  j = 0 ; j < M; j++){
            cin >> B[i][j];
            if (i == 0) {
                if (j == 0) continue;
                if (B[i][j - 1] % 7 + 1 != B[i][j] % 7) {
                    flag = false;
                    break;
                } else {
                    key += 1;
                }
            } else {
                if (B[i-1][j] + 7 != B[i][j]) {
                    flag  = false;
                    break; 
                }
            }
        }
        if (!flag) break;
    }


    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    // for (long long i = 0 ; i < N; i++) {
    //     for (long long  j = 0 ; j < M; j++){
    //         cout << B[i][j] << " ";
            
    //     }
    //     cout << endl;
    // }

    return 0;
}