#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    stack<int> a;
    queue<int> b;
    cin >> n >> m;
    int h = 1;
    while (n--) {
        int x;
        cin >> x;
        a.push(x);
    }
    while (m--) {
        int x;
        cin >> x;
        b.push(x);
    }
    if (a.size() != b.size()) {
        cout << "NO";
        return 0;
    }   
    while (!a.empty()) {
       
        if (a.top() != b.front()) {
            cout << "NO";

            return 0;
        }
        a.pop();
        b.pop();
    }
    cout << "YES";
    return 0;
}