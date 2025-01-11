#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    queue<string> qu;
    while (q--) {
        int t;
        cin >> t;

        if (t == 0) {
            string x;
            cin >> x;
            qu.push(x);
        } else if (t == 1 && !qu.empty()) {
            cout << qu.front() << endl;
            qu.pop();
        } else
            cout << "Invalid" << endl;
        // tahsin hasan
    }

    return 0;
}