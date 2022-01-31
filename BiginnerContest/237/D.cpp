#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <list>
#include <iterator>
// #include <atcoder/all>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    string S;

    cin >> N >> S;

    list<long> v;
    v.push_back(0);

    char lr;

    decltype(v)::iterator it = v.begin();
    // decltype(v)::iterator it_2 = v.begin();

    rep(i, N) {
        lr = S[i];
        if (S[i] == 'L') {
            // cout << *(it) << endl;
            v.insert(it, i+1);
            --it;
            // cout << *(it) << endl;
            // cout << endl;
        } else {
            // cout << *(it) << endl;
            ++it;
            v.insert(it, i+1);
            --it;
            // cout << *(it) << endl;
            // cout << endl;
        }

        // it_2 = v.begin();
        
        // cout << "output: ";

        // rep(j, i+2) {
        //     cout << *(it_2) << " ";
        //     ++it_2;
        // }
        
        // cout << endl;
    }

    it = v.begin();

    rep(i, N+1) {
        cout << *(it) << " ";
        it++;
    }

    return 0;
}