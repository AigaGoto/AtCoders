#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];

    int count = 0;
    bool stopFlag = false;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    while(true) {
        for(int i = 0; i < N; i++) {
            if (A[i] % 2 == 1) {
                stopFlag = true;
                break;
            }
            A[i] /= 2;
        }
        if (stopFlag) break;

        count++;
    }

    cout << count << endl;

    return 0;
}