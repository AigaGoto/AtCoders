#include <iostream>
#include <string>

using namespace std;

int main() {
    int p;
    string Alphabet = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i < 26; i++) {
        cin >> p;
        cout << Alphabet[p-1];
    }

    cout << endl;

    return 0;
}