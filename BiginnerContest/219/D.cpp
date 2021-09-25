#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1 << 29;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    vector<pair<int, int>> foods;
    pair<int, int> food;

    int dp[N+10][X+10][Y+10];
    for (int i = 0; i < N+10; ++i) for (int j = 0; j < X+10; ++j) for (int k = 0; k < Y+10; ++k) dp[i][j][k] = INF;
    dp[0][0][0] = 0;

    for (int i = 0; i < N; i++) {
        cin >> food.first >> food.second;
        foods.push_back(food);
    }

    for (int i = 0; i < N+10; ++i) {
        for (int j = 0; j < X+10; ++j) {
            for (int k = 0; k < Y+10; ++k) {
                if(j >= foods[i].first && k >= foods[i].second) {
                    dp[i+1][min(j+foods[i].first, X)][min(k+foods[i].second, Y)] = min(dp[i+1][min(j+foods[i].first, X)][min(k+foods[i+1].second, Y)], dp[i-1][j][k] + 1);
                } else {
                    dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k]);
                }
            }
        }
    }

    if (dp[N][X][Y] < INF) cout << dp[N][X][Y] << endl;
    else cout << -1 << endl;


    return 0;
}