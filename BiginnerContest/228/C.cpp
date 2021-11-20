#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

typedef map<int, int> container;
typedef pair<int, int> value_type;

vector<value_type> ranking;


struct second_order {
  bool operator()(const value_type& x, const value_type& y) const {
    return x.second > y.second;
  }
};

int main() {
    int K,N;
    cin >> N >> K;

    container mp;

    int totalPoint[N];

    int inp;
    int total = 0;

    bool can[N];

    rep(i, N) {
        can[i] = false;
        rep(j, 3) {
            cin >> inp;
            total += inp;
        }
        totalPoint[i] = total;
        total = 0;

        mp.insert(make_pair(i, totalPoint[i]));
    }

    vector<pair<int, int>> arr;
    for (const auto &item : mp) {
        arr.emplace_back(item);
    }

    sort(arr.begin(), arr.end(),
              [] (const auto &x, const auto &y) {return x.second < y.second;});

    int baseline = arr[N-K].second;

    for (const auto & [key, value] : arr) {
        if (value + 300 >= baseline) can[key] = true;
        else can[key] = false;
    }

    rep(i, N) {
        if (can[i]) cout << "Yes";
        else cout << "No";
        cout << endl;
    }

    return 0;
}