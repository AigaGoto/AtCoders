#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string S;

    cin >> N >> S;

    if (S[N-1] == 'o') cout << "Yes";
    else cout << "No";

    return 0;
}