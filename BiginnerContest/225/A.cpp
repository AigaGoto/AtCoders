#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>

using namespace std;

int main() {
    char a;
    set<char> s;

    for (int i = 0 ; i < 3; i++) {
        cin >> a;
        s.insert(a);
    }

    if (s.size() == 1) {
        cout << 1 << endl;
    } else if (s.size() == 2) {
        cout << 3 << endl;
    } else if (s.size() == 3) {
        cout << 6 << endl;
    }

    return 0;
}