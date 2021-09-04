#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    int N;
    cin >> N;

    int input;

    vector<int> d[N];

    for (int i = 0; i < N; i++) {
        cin >> input;
        d->push_back(input);
    }

    sort(d->begin(), d->end());

    int max_num = 0;
    int count = 0;

    for (int i = 0; i < N; i++) {
        if (max_num < d->at(i)) {
            max_num = d->at(i);
            count++;
        }
    }

    cout << count << endl;

    return 0;
}