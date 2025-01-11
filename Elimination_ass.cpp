#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<char> d;
        for (char c : s) {
            if (d.empty() || d.top() == c) {
                d.push(c);
            } else if (d.top() == '0' && c == '1') {
                d.pop();
            } else  // tahsin hasan
                d.push(c);
        }
        (d.empty()) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}