// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int Q;
//     cin >> Q;
    
//     vector<int> A;
//     int query;
//     int x;

//     for (int i = 0; i < Q; i++) {
//         cin >> query;

//         if (query == 1) {
//             cin >> x;
//             A.push_back(x);
//         } else if (query == 2) {
//             cout << A[0] << endl;
//             A.erase(A.begin());
//         } else {
//             sort(A.begin(), A.end());
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int Q;
    cin >> Q;
    
    queue<int> A;
    priority_queue<int, vector<int>, greater<int>> B;

    int query;
    int x;

    for (int i = 0; i < Q; i++) {
        cin >> query;

        if (query == 1) {
            cin >> x;
            A.push(x);
        } else if (query == 2) {
            if (B.empty()) {
                cout << A.front() << endl;
                A.pop();
            } else {
                cout << B.top() << endl;
                B.pop();
            }
        } else {
            // 優先度付きQueueに移すことで実行可能
            while(!A.empty()) {
                B.push(A.front());
                A.pop();
            }
        }
    }

    return 0;
}