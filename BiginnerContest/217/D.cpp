#include <iostream>
#include <set>

using namespace std;

int main() {
    int L, Q;
    cin >> L >> Q;

    set<int> st;
    int c, x;

    st.insert(0);
    st.insert(L);

    for (int i = 0; i < Q; i++) {
        cin >> c >> x;

        if (c == 1) {
            st.insert(x);
        } else {
            auto it = st.lower_bound(x);
            cout << *it - *prev(it) << endl;
        }
    }

    return 0;
}