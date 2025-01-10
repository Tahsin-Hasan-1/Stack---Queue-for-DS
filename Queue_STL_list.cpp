#include <bits/stdc++.h>
using namespace std;
class node {
   public:
    int val;
    node* next;
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
class Myqueue {
   public:
    list<int>l;
    int s = 0;

    void push(int val) {
       l.push_back(val);
    }
    void pop() {
       l.pop_front();
    }
    int front() {
       return l.front();
    }
    int back() {
        return l.back();
    }
    int size() {
        return l.size();
    }
    bool empty() {
        return l.empty();
    }
};
int main() {
    Myqueue q;
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        q.push(x);
    }
    // cout << q.front() << " " << q.back() << " " << q.size() << endl;
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}