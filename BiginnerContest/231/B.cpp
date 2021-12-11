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


int main() {
    int N;
    cin >> N;
    vector<pair<string, int>> persons;
    string person;

    pair<string, int> p;

    bool flag ;

    rep(i, N) {
        flag = false;
        cin >> person;
        rep (i, persons.size()) {
            p = persons[i];
            if (p.first == person) {
                flag = true;
                persons[i].second++;
                break;
            }
        }
        if (!flag) persons.push_back(make_pair(person, 1));
    }

    int ax = 0;

    string max_person;

    for (auto p: persons){
        if (ax < p.second) {
            ax = p.second;
            max_person = p.first;
        }
    }

    cout << max_person << endl;

    return 0;
}