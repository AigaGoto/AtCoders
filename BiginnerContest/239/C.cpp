#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <iomanip>
// #include <atcoder/all>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long x1, x2, y1, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    long long x_dif, y_dif;

    x_dif = x1 - x2;
    y_dif = y1 - y2;

    bool f0,f1,f2,f3,f4,f5,f6,f7,f8;

    f0 = (x_dif == -4) && (y_dif == 2 || y_dif == 0 || y_dif == -2); 
    f1 = (x_dif == -3) && (y_dif == 1 || y_dif == -1 || y_dif == -3 || y_dif == 3); 
    f2 = (x_dif == -2) && (y_dif == 4 || y_dif == 0 || y_dif == -4); 
    f3 = (x_dif == -1) && (y_dif == 1 || y_dif == -1 || y_dif == -3 || y_dif == 3); 
    f4 = (x_dif == 0) &&  (y_dif == 2 || y_dif == 0 || y_dif == -2 || y_dif == 4 || y_dif == -4);
    f5 = (x_dif == 1) && (y_dif == 1 || y_dif == -1 || y_dif == -3 || y_dif == 3); 
    f6 = (x_dif == 2) && (y_dif == 4 || y_dif == 0 || y_dif == -4); 
    f7 = (x_dif == 3) && (y_dif == 1 || y_dif == -1 || y_dif == -3 || y_dif == 3); 
    f8 = (x_dif == 4) && (y_dif == 2 || y_dif == 0 || y_dif == -2); 

    if (f0 || f1 || f2 || f3 || f4 || f5 || f6 || f7 || f8) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}