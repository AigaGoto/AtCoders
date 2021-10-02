#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    long long N, X, k, A_total, B_total;
    cin >> N;
    long long A[N];

    A_total = 0;

    for (int i = 0; i < N; i++){
        cin >> A[i];
        A_total += A[i];
    }

    cin >> X;

    long long div;
    div = X / A_total;

    B_total = A_total * div;
    k = N * div;

    for (int i = 0; i < N; i++){
        B_total += A[i];
        if (B_total > X) {
            k += i + 1;
            break;
        }
    }

    cout << k << endl;

    return 0;
}