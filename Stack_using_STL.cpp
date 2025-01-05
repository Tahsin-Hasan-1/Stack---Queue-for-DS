#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        s.push(x);
    }
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}