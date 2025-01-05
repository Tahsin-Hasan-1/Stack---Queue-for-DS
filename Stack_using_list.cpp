#include <bits/stdc++.h>
using namespace std;
class mystack {
   public:
    list<int> V;
    void push(int val) {
        V.push_back(val);
    }
    void pop() {
        V.pop_back();
    }
    int top() {
        return V.back();
    }
    int size() {
        return V.size();
    }
    bool empty() {
        return V.empty();
    }
};
int main() {
    mystack s;
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