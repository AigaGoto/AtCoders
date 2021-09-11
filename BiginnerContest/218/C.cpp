#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    char S[N][N],T[N][N]; 
    char input;

    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++){
            cin >> S[i][j]; 
        }
    }

    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++){
            cin >> T[i][j]; 
        }
    }

    

    return 0;
}