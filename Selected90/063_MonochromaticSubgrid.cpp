// 変な制約に着目する
// 全然よくわかってない
/*
    bit全探索
    map
*/

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

int H,W;
int P[8][1000];

int maximum_same(vector<int> R) {
	map<int, int> Map; int ret = 0;
	for (int i = 0; i < R.size(); i++) {
		Map[R[i]] += 1;
		ret = max(ret, Map[R[i]]);
	}
	return ret;
}

int main() {
    cin >> H >> W;
    rep(i,H){
        rep(j,W){
            cin >> P[i][j];
        }
    }

    int Answer = 0;
    
    for (int i = 0; i < (1<<H); i++) {
        vector<int> R;
        for (int j =0; j < W; j++) {
            int idx = -1;
            flag = false;
            for (int k = 0; k < H; k++) {
                if (i & (1<<k) == 0) continue;
                if (idx == -1) idx = P[k][j];
                else if (idx != P[k][j]) flag = true;
            }
            if (flag == false) R.push_back(idx);
        }

        int cntH = 0;
        int cntW = maximum_same(R);
        for (int j = 0; j < H; j++) {
			if ((i & (1 << j)) != 0) cntH += 1;
		}
		Answer = max(Answer, cntH * cntW);
    }

    cout << Answer << endl;

    return 0;
}