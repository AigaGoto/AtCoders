#include <iostream>
#include <string>

using namespace std;

int main() {
    bool flag[4] = {true, true, true, true};
    string contests[4] = {"ABC", "ARC", "AGC", "AHC"};
    string S[3];

    for (int i= 0; i < 3; i++) {
        cin >> S[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (contests[i] == S[j]) flag[i] = false;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (flag[i]) cout << contests[i] << endl;
    }

    return 0;
}