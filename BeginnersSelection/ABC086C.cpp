#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    int t[N+1], x[N+1], y[N+1];

    t[0] = x[0] = y[0] = 0;

    int distance = 0;
    bool can = true;

    for (int i = 1; i <= N; i++) {
        cin >> t[i] >> x[i] >> y[i];
        t[i] -= t[i-1];
        x[i] -= x[i-1];
        y[i] -= y[i-1];
    }

    for (int i = 1; i<= N; i++) {

        distance = abs(x[i]) + abs(y[i]);

        int a = t[i] % 2;
        int b = distance % 2;

        if (distance > t[i]) {
            can = false;
            break;
        }

        if (a^b) {
            can = false;
            break;
        }
        
    }
    
    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}