#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    int A,B,C, x;
    cin >> A >> B >> C;

    x = 1;

    while(true) {
        if (A <= x && x <= B && x % C == 0) {
            cout << x << endl;
            break;
        }
        x++;

        if (x > 1000) {
            cout << -1 << endl;
            break;
        }
    }

    return 0;
}