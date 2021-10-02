#include <iostream>
#include <string>
#include <algorithm>

using namespace std;



long long to_ten(string num, long long len, long long K) {
    long long pows = 1;
    long long total = 0;

    long long number = 0;
    for (int i = len - 1; i >= 0; i--){
        number = (num[i] - '0');
        total += pows * number;
        pows *= K;
    }

    return total;
}

int main() {
    long long K;
    cin >> K;

    long long ten_A, ten_B;
    string A, B;
    cin >> A >> B;

    ten_A = to_ten(A, A.length(), K);
    ten_B = to_ten(B, B.length(), K);

    cout << ten_A * ten_B << endl;

    return 0;
}