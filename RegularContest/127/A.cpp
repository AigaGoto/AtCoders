#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int solve_digit(long long x) {
    int digit = 1;
    while(true) {
        if (x / 10 == 0) break;
        else  {
            x = x / 10;
            digit++;
        }
    }
    return digit;
}

int main() {

    string N;
    cin >> N;

    long long numbers[15] = {1, 12, 123, 1234, 12345, 
                        123456, 1234567, 12345678, 123456789, 1234567900, 
                        12345679011, 123456790122, 1234567901233, 12345679012344, 123456790123455};

    long long a[15] = {0, 19, 199, 1999, 19999,
                        199999, 1999999, 19999999, 199999999, 1999999999,
                        19999999999, 199999999999, 1999999999999, 19999999999999, 199999999999999};


    // int digit = solve_digit(N);
    int digit = N.length();

    if (digit == 1) cout << 1 << endl;
    else {
        if (N[0] == '1') {
            cout << numbers[digit-1] - (a[digit-1] - stoll(N));
        } else {
            cout << numbers[digit-1];
        }
    }


    return 0;
}