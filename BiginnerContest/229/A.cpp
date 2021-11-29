#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S1, S2;
    cin >> S1 >> S2;

    if ((S1 == "#." && S2 == ".#") || (S2 == "#." && S1 == ".#")) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;        
    }

    return 0;
}