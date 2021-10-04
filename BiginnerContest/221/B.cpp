#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {

    string S, T, sub_T;
    cin >> S >> T;

    bool OK = false;

    if (S.compare(T) == 0) cout << "Yes" << endl;
    else {
        for (int i = 0; i < S.length() - 1; i++){
            sub_T = T;
            swap(sub_T[i], sub_T[i+1]);
            if (S.compare(sub_T) == 0) {
                OK = true;
            }
        }
        if (OK) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


    return 0;
}