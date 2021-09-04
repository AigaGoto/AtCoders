#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    int N,d;
    cin >> N;

    int Alice = 0;
    int Bob = 0;

    vector<int> a[N];

    for (int i = 0; i < N; i++) {
        cin >> d;
        a->push_back(d);
    }

    sort(a->begin(), a->end());
    reverse(a->begin(), a->end());

    for (int i = 0; i < N; i++){
        if (i % 2 == 0) Alice += a->at(i);
        else Bob += a->at(i);
    }

    cout << Alice - Bob << endl;

    return 0;
}