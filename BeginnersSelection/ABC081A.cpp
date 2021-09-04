#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    int sum = s[0]-'0' + s[1]-'0' + s[2]-'0';
    cout << sum << endl;

    return 0;
}