// 尺取法

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int N, K;
long a[100009];

map<int, int> typeMap;

int main() {
    cin >> N >> K;
    rep(i, N) cin >> a[i];

    int right = 0;
    int type_num = 0;
    int max_length = 0;

    for(int left = 0; left < N; left++) {
        while(right < N) {
            if (typeMap[a[right]] == 0 && type_num == K) break;
            if (typeMap[a[right]] == 0) type_num++;
            typeMap[a[right]] += 1;
            right++;
        }
        max_length = max(max_length, right - left);
        if (typeMap[a[left]] == 1) type_num--;
        typeMap[a[left]] -= 1;
    }

    cout << max_length << endl;

    return 0;
}