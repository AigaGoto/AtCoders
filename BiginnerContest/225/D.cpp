#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

struct train {
    int pre = 0;
    int back = 0;
    int val = 0;
};

int main() {
    long long N ,Q, x, y;
    cin >> N >> Q;

    int query;

    train trains[N+1];

    for (long long i = 1; i <= N; i++) {
        trains[i].val = i;
    }

    for (long long i = 0; i < Q; i++) {
        cin >> query;

        if (query == 1) {
            cin >> x >> y;
            trains[x].back = y;
            trains[y].pre = x;
        } else if (query == 2) {
            cin >> x >> y;
            trains[x].back = 0;
            trains[y].pre = 0;
        } else if (query == 3) {
            cin >> x;
            while(trains[x].pre != 0) {
                x = trains[x].pre;
            }
            do {
                cout << x << " ";
                x = trains[x].back;
            } while(trains[x].val != 0);
            cout << endl;
        }
    }

    return 0;
}