#include <iostream>

using namespace std;


int main() {
    int N, Y;
    cin >> N >> Y;

    int ans[3] = {-1, -1, -1};
    int findFlag = false;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N-i; j++) {
            int k = N-i-j;
            if (10000*i + 5000*j + 1000*k == Y && i + j + k == N) {
                findFlag = true;
                ans[0] = i;
                ans[1] = j;
                ans[2] = k;
                break;
            }
        }
        if (findFlag) break;
    }

    cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << endl;

    return 0;
}