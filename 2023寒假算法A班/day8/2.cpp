#include <bits/stdc++.h>

using namespace std;
int n;
struct node {
    int idx, x;
    bool operator<(const node&t) const {
        return idx < t.idx;
    }
};
stack<node> a, b;
priority_queue<node> v;
void merge() {
    string s1, s2;
    cin >> s1 >> s2;
    while (b.size()) {
        v.push(b.top());
        b.pop();
    }
    while (a.size()) {
        v.push(a.top());
        a.pop();
    }
}
void push(int idx) {
    string s;
    int x;
    cin >> s >> x;
    if(s == "A") a.push({idx, x});
    else b.push({idx, x});
}
void pop(int idx) {
    string s;
    cin >> s;
    if(s == "A" && a.size()) {
        cout << a.top().x << endl;
        a.pop();
    }
    else if(s == "B" && b.size()){
        cout << b.top().x << endl;
        b.pop();
    }
    else {
        cout << v.top().x << endl;
        v.pop();
    }
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "push") push(i);
        else if (s == "pop") pop(i);
        else if (s == "merge") merge();
    }
    return 0;
}