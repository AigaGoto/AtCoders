#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int a, b;
    bool flag = true;

    int key1 = 0, key2 = 0;
    int key = 0;

    for (int i = 0; i < N - 1; i++) {
        cin >> a >> b;

        if (i == 0) {
            key1 = a;
            key2 = b;
        } else if (i == 1) {
            if (key1 == a || key1 == b) {
                key = key1;
            } else if (key2 == a || key2 == b) {
                key = key2;
            } else {
                flag = false;
                break;
            }
        } else {
            if (key == a || key == b) {

            } else {
                flag = false;
                break;
            }
        }
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }



    return 0;
}