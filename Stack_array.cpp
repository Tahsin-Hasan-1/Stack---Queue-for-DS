#include <bits/stdc++.h>
using namespace std;
class mystack {
   public:
    vector<int> V;
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
    s.push(10);
    s.push(100);
    s.push(1000);
    cout << s.top() << endl;
    s.pop();
    s.pop();
    if (s.empty() == false)
        cout << s.top() << endl;
    s.pop();
    if (s.empty() == true)
        cout << s.top() << endl;

    return 0;
}