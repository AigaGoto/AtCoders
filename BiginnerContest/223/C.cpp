#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;


int main() {
    cout << fixed << setprecision(15);
    
    int N;
    cin >> N;

    double A[N], B[N], S[N];

    double v_total = 0.0;
    double s, abs, len_total = 0.0, s_total = 0.0;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        s = A[i] / B[i];
        S[i] = s;
        v_total += B[i];
        s_total += s;
        len_total += A[i];
    }

    abs = len_total / v_total;

    cout << s_total << endl;
    cout <<  abs << endl;

    return 0;
}