#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s) {
            if (st.empty() || st.top() == c) {
                st.push(c);
            } else if ((st.top() == '1' && c == '0') || (st.top() == '0' && c == '1')) {
                st.pop();
            }
            // tahsin hasan
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
