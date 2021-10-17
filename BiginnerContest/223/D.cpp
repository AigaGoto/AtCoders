#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int A[M], B[M];
    vector<int> S;

    for (int i = 0; i < N; i++) {
        S.push(i+1);
    }

    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
    }



    return 0;
}