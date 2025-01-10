#include <bits/stdc++.h>
using namespace std;
class node {
   public:
    int val;
    node* next;
    node* prev;
    node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Myqueue {
   public:
    node* head = NULL;
    node* tail = NULL;
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
        newnode->prev = tail;
        tail = newnode;
    }
    void pop() {
        s--;
        node* del = head;
        head = head->next;
        delete del;

        if (head == NULL) {
            tail = NULL;
            return;
        }
        head->prev = NULL;
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
        if (head == NULL) {
            return true;
        } else
            return false;  // or return head==NULL;
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