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

int H, W;

int main() {
    cin >> H >> W;

    int x = H / 2;
    int y = W / 2;

    if (H % 2 == 1) x += 1; 
    if (W % 2 == 1) y += 1; 

    if (H == 1 || W == 1) cout << H * W << endl;
    else cout << x * y << endl;


    return 0;
}