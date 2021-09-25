#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string X, inp;
    int N, itr;
    cin >> X >> N;

    vector<string> S;
    string alphabets = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < N; i++) {
        cin >> inp;
        S.push_back(inp);

        for (int j = 0; j < S[i].length(); j++){
            itr = X.find(S[i][j]);
            S[i][j] = alphabets[itr];
        }
    }

    sort(S.begin(), S.end());

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < S[i].length(); j++){
            itr = alphabets.find(S[i][j]);
            S[i][j] = X[itr];
        }
    }

    for (int i = 0; i < N; i++) {
        cout << S[i] << endl;
    }

    return 0;
}