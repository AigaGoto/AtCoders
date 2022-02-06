#include <iostream>
#include <string>

using namespace std;

int main() {
    long n;
    cin  >> n;

    if (n == 2 || n == 3 || n == 4) cout << "No";
    else cout << "Yes";

    return 0;
}