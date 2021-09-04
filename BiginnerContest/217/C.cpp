#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    int p[N], q[N];

    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }

    for (int i = 0; i < N; i++) {
        q[p[i] - 1] = i + 1; 
    }

    for (int i = 0; i < N; i++) {
        cout << q[i] << " ";
    }

    cout << endl;

    return 0;
}