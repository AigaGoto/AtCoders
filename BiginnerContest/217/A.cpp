#include <iostream>
#include <string>

using namespace std;

int main() {
    string S, T;

    cin >> S >> T;

    if(S.compare(T) < 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}