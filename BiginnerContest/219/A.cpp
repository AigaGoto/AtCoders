#include <iostream>
#include <string>

using namespace std;

int main() {
    int X;
    cin >> X;

    int ans;

    if (0 <= X && X < 40) {
        ans = 40 - X;
        cout << ans;
    } else if (40 <= X && X < 70) {
        ans = 70 - X;
        cout << ans;
    } else if (70 <= X && X < 90) {
        ans = 90 - X;
        cout << ans;
    } else {
        cout << "expert";
    }

    return 0;
}