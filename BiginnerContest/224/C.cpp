#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <float.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    long double X[N], Y[N];

    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    long long count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            for (int k = j+1; k < N; k++) {
                long double S = 1.0/2.0 * abs((X[i] - X[k]) * (Y[j] - Y[k]) - (X[j] - X[k]) * (Y[i] - Y[k]));
                if (S != 0 ) count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}