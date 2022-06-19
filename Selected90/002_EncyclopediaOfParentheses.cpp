// bit全探索 & かっこの条件判定

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

int N;

bool check(string par) {
    int dep = 0;
    for (int i = 0; i < par.length(); i++) {
        if (par[i] == '(') dep++;
        else dep--;

        if (dep < 0) return false;
    }

    if (dep == 0) return true;
    else return false;
}

int  main() {
    cin >> N;

    if(N % 2 != 0) {
        cout << "" << endl;
        return 0;
    }

    for (int i = 0; i < (1 << N); i++) {
        string par = "";
        for (int j = N - 1; j >= 0; j--) {
            if ((i & (1 << j)) == 0) par += "(";
            else par += ")";
        }

        if(check(par)) cout << par << endl;
        
    }


    return 0;
}