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
    node *head = NULL, *tail = NULL;
    int s = 0;

    void push(int val) {
        s++;
        node* newnode = new node(val);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    void pop() {
        if (head == NULL) return;
        s--;
        node* del = head;
        head = head->next;
        delete del;
        if (head == NULL) {
            tail = NULL;
        }
    }

    int front() {
        return head->val;
    }

    int back() {
        return tail->val;
    }

    int size() {
        return s;
    }

    bool empty() {
        return head == NULL;
    }
};

class mystack {
public:
    vector<int> V;

    void push(int val) {
        V.push_back(val);
    }

    void pop() {
        if (!V.empty()) {
            V.pop_back();
        }
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
    int n, m;
    cin >> n >> m;
    mystack a;
    Myqueue b;

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

    while (!b.empty()) {
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
