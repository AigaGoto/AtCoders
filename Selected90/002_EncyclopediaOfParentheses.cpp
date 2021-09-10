#include <iostream>

using namespace std;

int  main() {
    int N;
    bool OkFlag;
    cin >> N;

    if (N % 2 == 1) return 0;

    for (int bit = 0; bit < (1<<N); bit++) {
        OkFlag = true;
        int count = 0;
        string parentheses = "";
        for (int j = N - 1; j >= 0; j--) {
            if ((bit & (1 << j)) == 0) {
                parentheses += "(";
                count++;
            } else {
                parentheses += ")";
                count--;
            }

            if (count < 0) {
                OkFlag = false;
                break;
            }
        }
        if (OkFlag && count == 0) cout << parentheses << endl;
    }

    return 0;
}