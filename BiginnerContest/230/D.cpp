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
    long long N, D;
    cin >> N >> D;

    vector<pair<long long ,long long>> walls;
    pair<long long , long long> wall;

    long long L, R;

    rep(i, N){
        cin >> L >> R;
        wall.first = L;
        wall.second = R;
        walls.push_back(wall);
    }

    sort(walls.begin(), walls.end());

    long long count = 0;

    rep(i, N) {
        count++;
        long long right = walls[i].second;
        while(true) {
            if (i == N) break;
            if(walls[i].first > right + D -1) break;
            else i++;
        }
    }

    cout << count << endl;

    return 0;
}