#include <iostream>

using namespace std;

int digit_sum(int n) {
    if (n < 10) return n;
    return digit_sum(n/10) + n%10;
}

int main() {

    int N,A,B;
    cin >> N >> A >> B;

    int dsum, result;

    result = 0;

    for (int i = 1; i <= N; i++) {
        dsum = digit_sum(i);

        if (A <=dsum && dsum <= B) result += i;
    }

    cout << result << endl;

    return 0;
}