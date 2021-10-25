#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    string S;
    cin >> S;

    int len = S.length();
    if (len > 4) {
        S = S.substr(len - 4);
    }

    if (S.find("er") != string::npos) {
        cout << "er" << endl;
    } else if (S.find("ist") != string::npos) {
        cout << "ist" << endl;
    }

    return 0;
}