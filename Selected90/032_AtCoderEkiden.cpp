// 順列全探索(permutation)

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

int N, M;
int A[12][12];
bool dislike[12][12];
int X, Y;

int Answer = (1 << 30);

int main() {
    cin >> N;

    vector<int> P;

    rep(i, N) {
        rep(j, N) {
            cin >> A[i][j];
        }
    }

    cin >> M;

    rep(i, M) {
        cin >> X >> Y;
        X-=1; Y-=1;
        dislike[X][Y] = true;
        dislike[Y][X] = true;
    }

    // next_permutationを使うための配列
    // 5人だったら、[0,1,2,3,4]っていう感じ
    rep(i, N) P.push_back(i);

    do {
        int sum = 0;
        bool flag= true;

        rep(i, N) {
            sum += A[P[i]][i];
            if (i < N-1 && dislike[P[i]][P[i+1]]) flag = false;
        }

        if(flag) Answer = min(Answer, sum);


    } while(next_permutation(P.begin(), P.end()));

    if (Answer == (1 << 30)) Answer = -1;

    cout << Answer << endl;

    return 0;
}