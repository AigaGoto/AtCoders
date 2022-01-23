#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
// #include <atcoder/all>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    vector<char> A;

    map<char, int> m;
    int inp;

    rep(i, N) {
        cin >> inp;
        m[inp]++;
        A.push_back(inp);
    }

    vector<pair<char, int> > arr;
    for (const auto &item : m) {
        arr.emplace_back(item);
    }

    sort(arr.begin(), arr.end(),
              [] (const auto &x, const auto &y) {return x.second == y.second ? x.first > y.first : x.second > y.second;});

    int max = arr[0].second;
    vector<char> max_arr;

    for (auto i = arr.begin(); i != arr.end(); i++) {
        if(max != i->second) break;
        max_arr.push_back(i->first);
    }

    string max_tempS;

    for (int i = 0; i < max_arr.size(); i++) {
        vector<char> temp = A;
        temp.erase(remove(temp.begin(), temp.end(), i), temp.end());
        string tempS(temp.begin(), temp.end());
        if (i != 0) {
            if (tempS.compare(max_tempS) < 0) max_tempS = tempS;
        } else {
            max_tempS = tempS; 
        }
    }


    rep(i, max_tempS.size()) cout << max_tempS[i] << " ";
    cout << endl;

    // cout << "Sorted - " << endl;
    // for (const auto & [key, value] : arr) {
    //     cout << key << " : " << value << endl;
    // }

    // for(auto i = m.begin(); i != m.end(); i++) {
    //     cout << i->first << " : " << i->second << endl;
    // }

    return 0;
}