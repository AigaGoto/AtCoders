#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

// double getGold(double silver, double a) {
//     return silver / a;
// }

// double getSilver(double gold, double a) {
//     return gold * a;
// }

int main() {
    int N;
    cin >> N;

    double A[N];
    int v[N];

    for (int i = 0; i < N; i++){
        cin >> A[i];
        v[i] = 0;
    }

    int max_index = 0;
    double max_value = A[0];

    int min_index = 0;
    double min_value = 0;

    bool maxFlag = true;


    // double gold = 1.0;
    // double silver = 0.0;

    for (int i = 1; i < N; i++){

        if (maxFlag) {
            if (A[i] >= max_value) {
                max_value = A[i];
                max_index = i;
                // cout << i << ": change max_value." << endl;
            } else {
                maxFlag = false;
                min_index = i;
                min_value = A[i];

                if (i + 1 == N) {
                    v[max_index] = 1;
                    v[min_index] = 1;
                }
                // cout << i << ": change to minFlag." << endl;
                continue;
            }
        } else {
            if (A[i] >= min_value) {
                maxFlag = true;
                v[max_index] = 1;
                v[min_index] = 1;

                max_index = i;
                max_value = A[i]; 
                // cout << i << ": exchange silver & gold." << endl;
            } else {
                min_value = A[i];
                min_index = i;
                // cout << i << ": change min_value." << endl;

                if (i + 1 == N) {
                    v[max_index] = 1;
                    v[min_index] = 1;
                }
            }

        }
        

    }

    for (int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}