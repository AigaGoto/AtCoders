#include <iostream>
#include <string>

using namespace std;

int main() {
    string S[3], T;

    cin >> S[0] >> S[1] >> S[2] >> T;

    for (int i = 0; i < T.length(); i++) {
        cout << S[T[i] - '0' - 1];
    }

    cout << endl;

    return 0;
}